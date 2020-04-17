all: tests.o linearSearch.o binarySearch.o bubbleSort.o mergeSort.o
	g++ tests.o linearSearch.o binarySearch.o bubbleSort.o mergeSort.o -O0 -o run_tests

fast: tests.o linearSearch.o binarySearch.o bubbleSort.o mergeSort.o
	g++ tests.o linearSearch.o binarySearch.o bubbleSort.o mergeSort.o -O3 -o run_tests

clean:
	rm *.o
	rm run_tests

tests.o: tests.cpp Timer.h search.h sort.h
	g++ -c tests.cpp

linearSearch.o: linearSearch.cpp search.h
	g++ -c linearSearch.cpp

binarySearch.o: binarySearch.cpp search.h
	g++ -c binarySearch.cpp

bubbleSort.o: bubbleSort.cpp sort.h
	g++ -c bubbleSort.cpp

mergeSort.o: mergeSort.cpp sort.h
	g++ -c mergeSort.cpp

