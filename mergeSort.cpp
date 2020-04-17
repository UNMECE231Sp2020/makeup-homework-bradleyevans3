#include <vector> 
#include "sort.h"

void merge(std::vector<int> &array, int left, int mid, int right)
{
	//i is for the left side, j is for the right side, k is for both
	// (once i and j are exhausted)
	int i, j, k;

	//left_size is the left half of the array/vector
	//right_size is the right half of the array/vector
	int left_size = mid - left + 1;
	int right_size = right - mid;

	std::vector<int> left_vector, right_vector;
	left_vector.reserve(left_size);
	right_vector.reserve(right_size);
	
	for (i=0; i<left_size; i++) {
		left_vector.push_back(array[left+i]);
	}

	for (j=0; j<right_size; j++) {
		right_vector.push_back(array[mid+1+j]);
	}

	i=0, j=0, k=left;

	while( (i<left_size) && (j<right_size) ) {
		if(left_vector[i] <= right_vector[j]) {
			array[k] = left_vector[i];
			i += 1;
		}
		else {
			array[k] = right_vector[j];
			j +=1;
		}
		k += 1;
	}

	while(i<left_size) {
		array[k] = left_vector[i];
		i += 1;
		k += 1;
	}

	while(j<right_size) {
		array[k] = right_vector[j];
		j += 1;
		k += 1;
	}
}


void mergeSort(std::vector<int> &array, int left, int right) 
{
	int mid;
	if(left<right)
	{
		mid = (left+right)/2;

		mergeSort(array, left, mid);
		mergeSort(array, mid+1, right);

		merge(array, left, mid, right);
	}
}

