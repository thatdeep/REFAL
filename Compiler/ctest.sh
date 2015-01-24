rm srefc1
rm trefc1
./srefc -c 'g++ -o srefc1 -I../SRLib' *.sref ../SRLib/*.sref ../SRLib/Library.cpp ../SRLib/refalrts.cpp 2> errcomp.txt > ocomp.txt
./srefc1 -c 'g++ -o trefc1 -I../SRLib' ../../Code/test_pattern.sref ../SRLib/Library.cpp ../SRLib/refalrts.cpp 2> errtest.txt > otest.txt
