#ifndef __HELPER_FUNCTIONS_H__
#define __HELPER_FUNCTIONS_H__

#include <vector>

// Implements sliding function of iterable sequence
template<typename It, typename ValueType = typename std::iterator_traits<It>::value_type>
std::vector<std::vector<ValueType>> sliding(It beg, It end, size_t window_size, size_t step) {
    //typedef std::iterator_traits<It>::value_type value_type;
    auto size = std::distance(beg, end);
    auto window_count = size/step + ((size % step != 0) ? 1 : 0);
    auto composer = std::vector<std::vector<ValueType>>(window_count);
    composer.reserve(window_count);
    for (int i = 0; i < window_count; i++) {
        It window_begin = std::next(beg, i*step);
        It window_end = (beg + i*step + window_size >= end) ? end : std::next(beg, i*step + window_size);
        composer[i] = std::vector<ValueType>(window_begin, window_end);
    }
    return composer;
};

// Simple function for vector slicing
template<typename T>
std::vector<T>
slice_vector(const std::vector<T>& v, int start = 0, int end = -1) {
    int oldlen = v.size();
    int newlen;
    if (end == -1 or end >= oldlen)
        newlen = oldlen - start;
    else
        newlen = end - start;
    std::vector<T> nv = std::vector<T>(newlen);
    for (int i=0; i<newlen; i++) {
        nv[i] = v[start+i];
    }
    return nv;
}

// Simple function for vector concatenation
template<typename T>
std::vector<T> concat(std::vector<std::vector<T>> &vectors) {
    auto size_all = 0;
    for (int i = 0; i < vectors.size(); i++)
        size_all += vectors[i].size();
    auto result = std::vector<T>();
    result.reserve(size_all);
    for (int i = 0; i < vectors.size(); i++)
        result.insert(result.end(), vectors[i].begin(), vectors[i].end());
    return result;
}

// Simple function for vector printing
template<typename T>
void print_vector(const std::vector<T> &vec, std::string &vec_name) {
    std::cout << vec_name << ": [ ";
    for (auto i:vec) {
        std::cout << (i) << " ";
    }
    std::cout << "]" << std::endl;
};

#endif