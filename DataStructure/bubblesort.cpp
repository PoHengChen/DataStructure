#include "sort.h"
#define size 6

void swap(int *x, int *y) {
	int temp 
	temp = *x;
	*x = *y;
	*y = temp;
}

void bubblesort(int data[]) {
	for (int i = size - 1; i > 0; i--) { // n elements need (n-1) times data scans
		for (int j = 0; j < i; j++) {
			if (data[j] > data[j + 1]) {
				swap(data[j], data[j+1]);
			}
		}
	}
}

void bubblesort2(int data[]) {
	bool flag = 0;
	for (int i = size - 1; i > 0; i--) { // n elements need (n-1) times data scans
		for (int j = 0; j < i; j++) {
			if (data[j] > data[j + 1]) {
				swap(data[j], data[j + 1]);
			}
		}
		if (flag)
			break;
	}
}

//void selectionsort(int data[]) {
//	for (int i = 0; i < size-1; i++) {
//		for (int j = i+1; j < size-1; j++) {
//			if (data[] < data[]) {
//				int tmp = ;
//				data[i] = data[];
//				data[] = tmp;
//			}
//		}
//	}
//}