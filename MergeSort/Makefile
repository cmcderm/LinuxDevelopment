CXX = g++
CXXFLAGS = -std=c++17 -Wall -g

mergesort.o: mergesort.h mergesort.cpp

main.o: main.cpp

MergeSort: main.o mergesort.o
	$(CXX) $(CXXFLAGS) -o MergeSort main.o mergesort.o

clean:
	rm main *.o
