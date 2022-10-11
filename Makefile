CXX := g++
CXXFLAGS := -g -Wall --std=c++11
VALGRIND := valgrind --tool=memcheck --leak-check=yes

all: llrec-test

llrec-test: llrec.o llrec-test.cpp
	$(CXX) $(CXXFLAGS) llrec.o llrec-test.cpp -o llrec-test

llrec.o: llrec.cpp llrec.h
	$(CXX) $(CXXFLAGS) -c llrec.cpp

#-----------------------------------------------------
# ADD target(s) to build your llrec-test executable
#-----------------------------------------------------


clean:
	rm -f *.o rh llrec-test *~

.PHONY: clean 