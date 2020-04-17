#include "sort.h"

void swap(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

void bubbleSort(int *begin, const int *end)
{
	// Use swap to exchange two values
        // swap(int *begin, int *end)

	int *i, *j;
	for(i=begin; i!=end; i++) {
		for(j=i+1; j!=end; j++) {
			if(*j > *(j+1)) {
				swap(j, j+1);
			}
		}
	}
}


