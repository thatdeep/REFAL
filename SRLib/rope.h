#ifndef __ROPE_H__
#define __ROPE_H__

#include <cassert>
#include <iostream>
#include "helper_functions.h"
#include <vector>
#include <random>
#include <fstream>

#define BUFFER_SIZE 16

#define RED false
#define BLACK true
typedef bool Color;
typedef unsigned char uchar;

static std::string name("next");

struct ObjectValue {
    uint32_t label;
};

template <class T>
class Rope {
    struct Node {
        Node(Color color,
            std::shared_ptr<const Node> const &lft,
            std::shared_ptr<const Node> const &rgt)
                : _color(color),
                  _length(lft->length() + rgt->length()),
                  _black_height(lft->_black_height + (uchar)((color == BLACK) ? 1 : 0)),
                  _string(),
                  _left(lft),
                  _right(rgt) {
                    auto lh= lft->_black_height;
                    auto rh = rgt->_black_height;
                    assert(lft->_black_height == rgt->_black_height); }
        Node(std::vector<T> &string)
                : _color(BLACK),
                  _length(string.size()),
                  _black_height(1),
                  _string(string),
                  _left(),
                  _right() { }

        uint32_t length() const {
            return _length;
        }
        void fill_data(std::vector<T> &data, int begin) const {
            if (!isLeaf()) {
                int right_begin = begin;
                if (_left.get()) {
                    right_begin = begin + _left->length();
                    _left->fill_data(data, begin);
                }
                if (_right.get()) {
                    _right->fill_data(data, right_begin);
                }
            } else {
                for (int i = 0; i < _string.size(); i++)
                    data[begin + i] = _string[i];
            }
            return;
        }
        bool isLeaf() const { return !(_left.get() && _right.get()); }
        uchar black_height() const { return _black_height; }
        uint32_t _length;
        uchar _black_height;
        std::vector<T> _string;
        std::shared_ptr<const Node> _left;
        std::shared_ptr<const Node> _right;
        Color _color;
    };
    explicit Rope(std::shared_ptr<const Node> const &node): _root(node) {}
    Color rootColor() const {
        assert(!isEmpty());
        return _root->_color;
    }
public:
    Rope() {}
    Rope(const Rope &r) : _root(r._root) {}
    Rope(Color c, Rope const &left, Rope const &right)
            : _root(std::make_shared<const Node>(c, left._root, right._root)) {}
    Rope(std::vector<T> &string) : _root(std::make_shared<const Node>(string)) {}


    bool isEmpty() const { return !_root; }
    bool isLeaf() const { return left().isEmpty() && right().isEmpty(); }
    uchar black_height() const { return _root->_black_height; }
    Rope left() const {
        assert(!isEmpty());
        return Rope(_root->_left);
    }
    Rope right() const {
        assert(!isEmpty());
        return Rope(_root->_right);
    }
    Rope repaint(Color c) const {
        assert(!isLeaf());  // Do you really wanna change color of leaf rope? :-)
        return Rope(c, left(), right());
    }
    void print() const {
        if (!isLeaf()) {
            left().print();
            right().print();
        } else {
            print_vector<T>(_root->_string, name);
        }
    }
    std::vector<T> data() const {
        std::vector<T> data = std::vector<T>(length());
        //data.reserve(length());
        _root->fill_data(data, 0);
        return data;
    }
    uint32_t length() const {
        return _root->length();
    }
    // Check if no red node has a red child
    void assert1() const
    {
        if (!isLeaf())
        {
            auto lft = left();
            auto rgt = right();
            if (rootColor() == RED)
            {
                assert(lft.isEmpty() || lft.rootColor() == BLACK);
                assert(rgt.isEmpty() || rgt.rootColor() == BLACK);
            }
            lft.assert1();
            rgt.assert1();
        }
    }
    // Check if every path from root to leafs contains the same
    // number of black nodes
    int assert2() const
    {
        if (isLeaf() == 0)
            return 1;
        int lft = left().assert2();
        int rgt = right().assert2();
        assert(lft == rgt);
        return (rootColor() == BLACK)? 1 + lft: lft;
    }
    bool doubledLeft() const
    {
        return !isEmpty()
                && rootColor() == RED
                && !left().isEmpty()
                && !left().isLeaf()
                && left().rootColor() == RED;
    }
    bool doubledRight() const
    {
        return !isEmpty()
                && rootColor() == RED
                && !right().isEmpty()
                && !right().isLeaf()
                && right().rootColor() == RED;
    }
    void print_to_dot() const {
        std::cout << "Print to dot started" << std::endl;
        std::ofstream dotfile ("test.dot", std::ofstream::trunc);
        dotfile << "digraph graphname {" << std::endl;
        dotfile << "xxx" << _root.get() << "[label=" << length() << "];" << std::endl;
        if (_root->_color == RED)
            dotfile << "xxx" << _root.get() << "[color=red];" << std::endl;
        recursive_print_to_dot(_root, dotfile);
        dotfile << "}" << std::endl;
        dotfile.close();
    }
    void recursive_print_to_dot(const std::shared_ptr<const Node> &node, std::ofstream &dotfile) const {
        if (!node->isLeaf()) {
            dotfile << "xxx" << node.get() << "[label=\"" << "len:[" << node->length() << "], bh:[" << (int)node->black_height() << "]\"];" << std::endl;
            if (node->_color == RED)
                dotfile << "xxx" << node.get() << "[color=red];" << std::endl;
            if (node->_left.get()) {
                recursive_print_to_dot(node->_left, dotfile);
                dotfile << "xxx" << node.get() << "->" << "xxx" << node->_left.get() << ";" << std::endl;
            }
            if (node->_right.get()) {
                recursive_print_to_dot(node->_right, dotfile);
                dotfile << "xxx" << node.get() << "->" << "xxx" << node->_right.get() << ";" << std::endl;
            }

        } else {
            dotfile << "xxx" << node.get() << "[label=\"[" << node->_string[0] << ":" << node->_string[node->_string.size() - 1] << "]size:" << node->length() << "\"];" << std::endl;
        }
    }
    Rope append(const Rope &other) const {
        if (isEmpty()) return Rope(other);
        if (other.isEmpty()) return Rope(*this);

        if (isLeaf() && other.isLeaf()) {
            if (length() + other.length() <= BUFFER_SIZE) {
                auto sequence = std::vector<T>();
                sequence.reserve(length() + other.length());
                sequence.insert(sequence.end(), _root->_string.begin(), _root->_string.end());
                sequence.insert(sequence.end(), other._root->_string.begin(), other._root->_string.end());
                return Rope(sequence);
            }
            return Rope(RED, *this, other).repaint(BLACK);
        } else if (black_height() == other.black_height()) {
            return Rope(RED, *this, other).repaint(BLACK);
        } else if (black_height() > other.black_height()) {
            return appendLow(other).repaint(BLACK);
        } else {
            return other.prependLow(*this).repaint(BLACK);
        }
    }

    Rope appendLow(const Rope &other) const {
        if (other.isEmpty()) return Rope(*this);

        if (isLeaf() && other.isLeaf()) {
            if (length() + other.length() <= BUFFER_SIZE) {
                auto sequence = std::vector<T>();
                sequence.reserve(length() + other.length());
                sequence.insert(sequence.end(), _root->_string.begin(), _root->_string.end());
                sequence.insert(sequence.end(), other._root->_string.begin(), other._root->_string.end());
                return Rope<T>(sequence);
            }
            return Rope(RED, *this, other);
        } else {
            if (black_height() == other.black_height() && rootColor() == BLACK) {
                return Rope(RED, *this, other);
            } else {
                if (rootColor() == BLACK) {
                    // DEBUG-ONLY STATEMENT
                    auto lh= left().black_height();
                    auto rh = right().appendLow(other).black_height();
                    assert(lh == rh);
                    //Rope(rootColor(), left(), right().appendLow(other)).balance().assert1();
                    // END OF DEBUG-ONLY STATEMENT
                    return Rope(rootColor(), left(), right().appendLow(other)).balance();
                } else {
                    // DEBUG-ONLY STATEMENT
                    auto lh= left().black_height();
                    auto rh = right().appendLow(other).black_height();
                    assert(lh == rh);
                    //Rope(rootColor(), left(), right().appendLow(other)).assert1();
                    // END OF DEBUG-ONLY STATEMENT
                    return Rope(rootColor(), left(), right().appendLow(other));
                }
            }
        }
    }
    Rope prependLow(const Rope &other) const {
        if (other.isEmpty()) return Rope(*this);

        if (isLeaf() && other.isLeaf()) {
            if (length() + other.length() <= BUFFER_SIZE) {
                auto sequence = std::vector<T>();
                sequence.reserve(length() + other.length());
                sequence.insert(sequence.end(), other._root->_string.begin(), other._root->_string.end());
                sequence.insert(sequence.end(), _root->_string.begin(), _root->_string.end());
                return Rope<T>(sequence);
            }
            return Rope(RED, other, *this);
        } else {
            if (black_height() == other.black_height() && rootColor() == BLACK) {
                return Rope(RED, other, *this);
            } else {
                if (rootColor() == BLACK) {
                    // DEBUG-ONLY STATEMENT
                    auto lh= left().prependLow(other).black_height();
                    auto rh = right().black_height();
                    assert(lh == rh);
                    //Rope(rootColor(), left().prependLow(other), right()).balance().assert1();
                    // END OF DEBUG-ONLY STATEMENT
                    return Rope(rootColor(), left().prependLow(other), right()).balance();
                } else {
                    // DEBUG-ONLY STATEMENT
                    auto lh= left().prependLow(other).black_height();
                    auto rh = right().black_height();
                    assert(lh == rh);
                    //Rope(rootColor(), left().prependLow(other), right()).assert1();
                    // END OF DEBUG-ONLY STATEMENT
                    return Rope(rootColor(), left().prependLow(other), right());
                }
            }
        }
    }
    Rope balance() const {
        auto lft = left();
        auto rgt = right();
        if (lft.doubledLeft()) {
            // DEBUG-ONLY STATEMENT
            auto lh_in= lft.right().black_height();
            auto rh_in = rgt.black_height();
            assert(lh_in == rh_in);
            auto lh_out= lft.left().repaint(BLACK).black_height();
            auto rh_out = Rope(BLACK, lft.right(), rgt).black_height();
            assert(lh_out == rh_out);
            Rope(RED, lft.left().repaint(BLACK), Rope(BLACK, lft.right(), rgt)).assert1();
            // END OF DEBUG-ONLY STATEMENT
            return Rope(RED,
                    lft.left().repaint(BLACK),
                    Rope(BLACK, lft.right(), rgt));
        }
        else if (lft.doubledRight()) {
            // DEBUG-ONLY STATEMENT
            auto lh_in1= lft.left().black_height();
            auto rh_in1 = lft.right().left().black_height();
            assert(lh_in1 == rh_in1);
            auto lh_in2= lft.right().right().black_height();
            auto rh_in2 = rgt.black_height();
            assert(lh_in2 == rh_in2);
            auto lh_out= Rope(BLACK, lft.left(), lft.right().left()).black_height();
            auto rh_out = Rope(BLACK, lft.right().right(), rgt).black_height();
            assert(lh_out == rh_out);
            Rope(RED, Rope(BLACK, lft.left(), lft.right().left()), Rope(BLACK, lft.right().right(), rgt));
            // END OF DEBUG-ONLY STATEMENT
            return Rope(RED,
                    Rope(BLACK, lft.left(), lft.right().left()),
                    Rope(BLACK, lft.right().right(), rgt));
        }
        else if (rgt.doubledLeft()) {
            // DEBUG-ONLY STATEMENT
            auto lh_in1= lft.black_height();
            auto rh_in1 = rgt.left().left().black_height();
            assert(lh_in1 == rh_in1);
            auto lh_in2= rgt.left().right().black_height();
            auto rh_in2 = rgt.right().black_height();
            assert(lh_in2 == rh_in2);
            auto lh_out= Rope(BLACK, lft, rgt.left().left()).black_height();
            auto rh_out = Rope(BLACK, rgt.left().right(), rgt.right()).black_height();
            assert(lh_out == rh_out);
            Rope(RED, Rope(BLACK, lft, rgt.left().left()), Rope(BLACK, rgt.left().right(), rgt.right())).assert1();
            // END OF DEBUG-ONLY STATEMENT
            return Rope(RED,
                    Rope(BLACK, lft, rgt.left().left()),
                    Rope(BLACK, rgt.left().right(), rgt.right()));
        }
        else if (rgt.doubledRight()) {
            // DEBUG-ONLY STATEMENT
            auto lh_in= lft.black_height();
            auto rh_in = rgt.left().black_height();
            assert(lh_in == rh_in);
            auto lh_out= Rope(BLACK, lft, rgt.left()).black_height();
            auto rh_out = rgt.right().repaint(BLACK).black_height();
            assert(lh_out == rh_out);
            Rope(RED, Rope(BLACK, lft, rgt.left()), rgt.right().repaint(BLACK)).assert1();
            // END OF DEBUG-ONLY STATEMENT
            return Rope(RED,
                    Rope(BLACK, lft, rgt.left()),
                    rgt.right().repaint(BLACK));
        }
        else {
            // DEBUG-ONLY STATEMENT
            auto lh= lft.black_height();
            auto rh = rgt.black_height();
            assert(lh == rh);
            Rope(BLACK, lft, rgt).assert1();
            // END OF DEBUG-ONLY STATEMENT
            return Rope(BLACK, lft, rgt);
        }
    }
    Rope prefix(uint32_t len) {
        if (len > length()) len = length();
        if (len == 0) return Rope();
        if (len == length()) return Rope(*this);
        // prefix of a List Rope
        if (isLeaf()) {
            std::vector<T> new_string = slice_vector<T>(_root->_string, 0, len);
            return Rope(new_string);
        }
        // prefix of a Complex Rope
        if (!left().isEmpty() && left().length() < len)
            return left().append(right().prefix(len - left().length()));
        return left().prefix(len);
    }
    Rope suffix(uint32_t len) {
        if (len > length()) len = length();
        if (len == 0) return Rope();
        if (len == length()) return Rope(*this);
        // suffix of a List Rope
        if (isLeaf()) {
            std::vector<T> new_string = slice_vector<T>(_root->_string, _root->_string.size() - len);
            return Rope(new_string);
        }
        // suffix of a Complex Rope
        if (!right().isEmpty() && right().length() < len)
            return left().suffix(len - right().length()).append(right());
        return right().suffix(len);
    }
    Rope substr(int start = 0, int end = -1) {
        if (end == -1 || end > length())
            end = length();
        if (start < 0) start = 0;
        if (start > length()) start = length();
        return this->prefix(end).suffix(end - start);
    }
private:
    std::shared_ptr<const Node> _root;
};

template<class T>
class RopeHelper {
    std::default_random_engine generator;
    std::uniform_int_distribution<int> distribution;
    Rope<T> rope(std::vector<Rope<T>> same_ropes) {
        // HERE YOU CAN SEE STUPID BALANCE FUNCTION.
        // BUT
        // WE NEED TO PARTITION EVEN ARRAY BY RANDOM INDEX
        // TO MAKE HIGH LEVEL OF BALANCE
        if (same_ropes.size() == 1) return same_ropes[0];
        if (same_ropes.size() % 2 == 0) {
            auto new_ropes = std::vector<Rope<T>>(same_ropes.size()/2);
            new_ropes.reserve(same_ropes.size()/2);
            for (int i = 0; i < same_ropes.size(); i+=2) {
                new_ropes[i/2] = Rope<T>(BLACK, same_ropes[i], same_ropes[i+1]);
            }
            return rope(new_ropes);
        }
        auto first_part = slice_vector(same_ropes, 0, same_ropes.size() - 3);
        auto second_part = slice_vector(same_ropes, same_ropes.size() - 3, same_ropes.size());
        auto new_ropes = std::vector<Rope<T>>(first_part.size()/2 + 1);
        new_ropes.reserve(first_part.size()/2 + 1);
        for (int i = 0; i < first_part.size(); i+=2) {
            new_ropes[i/2] = Rope<T>(BLACK, first_part[i], first_part[i+1]);
        }
        new_ropes[first_part.size()/2] = Rope<T>(BLACK, second_part[0], Rope<T>(RED, second_part[1], second_part[2]));
        return rope(new_ropes);
    }
public:
    RopeHelper<T>() : distribution(0, 1) {
        std::random_device rd;
        generator = std::default_random_engine(rd());
    }
    Rope<T> rope(std::vector<T> sequence) {
        if (sequence.size() <= BUFFER_SIZE) {
            return Rope<T>(sequence);
        } else {
            auto sequences = sliding(sequence.begin(), sequence.end(), BUFFER_SIZE, BUFFER_SIZE);
            auto leafs = std::vector<Rope<T>>(sequences.size());
            leafs.reserve(sequences.size());
            for (int i = 0; i < sequences.size(); i++)
                leafs[i] = Rope<T>(sequences[i]);
            return rope(leafs);
        }
    }
};




#endif