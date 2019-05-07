#include <iostream>
#include <random>

#include "mergesort.h"

int main(int argc, char** argv){
	int n;
	if(argc >= 2){
		n = atoi(argv[1]);
	} else {
		n = 100;
	}

	int range;
	if(argc >= 3){
		range = atoi(argv[2]);
	} else {
		range = 100;
	}

	int arr[n];
	for(int i = 0; i < n; i++){
		arr[i] = rand() % range;
	}

	Sort::MergeSort(arr, n);

	for(int i = 0; i < n; i++){
		std::cout << arr[i] << std::endl;
	}
	return 1;
}