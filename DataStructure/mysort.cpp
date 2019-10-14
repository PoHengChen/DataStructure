#include "sort.h"
#define size 6

//===============================================================
// using 2 pointers to swap values without declare new variables
// *x = *&data[] = data[]
//
//===============================================================
void swap(int* x, int* y) {
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}

void bubblesort(int data[]) {
	for (int i = size - 1; i > 0; i--) { // n elements need (n-1) times data scans
		for (int j = 0; j < i; j++) {
			if (data[j] > data[j + 1]) {
				swap(&data[j], &data[j + 1]);
			}
		}
	}
}

void bubblesort2(int data[]) {
	bool flag = 0;
	for (int i = size - 1; i > 0; i--) { // n elements need (n-1) times data scans
		for (int j = 0; j < i; j++) {
			if (data[j] > data[j + 1]) {
				swap(&data[j], &data[j + 1]);
			}
		}
		if (flag)
			break;
	}
}

void selectionsort(int data[]) {
	for (int i = 0; i < size-1; i++) {
		int min_ind = i; // renew index of minimum value
		for (int j = i+1; j < size; j++)
			if (data[j] < data[min_ind])
				min_ind = j;
		swap(&data[min_ind], &data[i]);
	}
}

// insertion sort
//					 j			 i
// data [0] [1] [2] [3] [4] [5] [6] [7] 
//		 1   2   3   4   10  12  5   6
//					   ^		 |
//					   |_________|

void insertionsort(int data[]) {
	for (int i = 1; i < size; i++) { //start from second element and compare with first 
		int j = 0;
		for (j = i-1; j >= 0; j--) { // first element that is data[i] is larger than data[j]
			if (data[i] > data[j]) 
				break;
		}
		int tmp = data[i];
		for (int k = i; k > j+1; k--)
			data[k] = data[k-1];
		data[j+1] = tmp;
	}
}

//void shellsort(int data[]) {
//
//}