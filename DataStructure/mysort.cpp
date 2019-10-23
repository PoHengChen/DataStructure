﻿
#include <iomanip>
#include <iostream>
#include "mysort.h"
#include <vector>
#define size 6
using namespace std;
//===============================================================
// using 2 pointers to swap values without declare new variables
// *x = *&data[] = data[]
//
//===============================================================
void mysort::swap(int* x, int* y) {
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}

// 
void mysort::showdata(int* p) {
	for (int i = 0; i < 6; i++)
		cout << setw(3) << *(p+i);
	std::cout << endl;
}

void mysort::bubblesort(int* p) {
	for (int i = size - 1; i > 0; i--) { // n elements need (n-1) times data scans
		for (int j = 0; j < i; j++) {
			if (*(p+j) > *(p+j+1)) {
				swap((p + j), (p + j + 1));
			}
		}
	}
}

void mysort::bubblesort2(int data[]) {
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

void mysort::selectionsort(int data[]) {
	for (int i = 0; i < size-1; i++) {
		int min_ind = i; // renew index of minimum value
		for (int j = i+1; j < size; j++)
			if (data[j] < data[min_ind])
				min_ind = j;
		swap(&data[min_ind], &data[i]);
	}
}

// ========== Insertion sort =============
//					 j			 i
// data [0] [1] [2] [3] [4] [5] [6] [7] 
//		 1   2   3   4   10  12  5   6
//					   ^		 |
//					   |_________|
// =======================================
void mysort::insertionsort(int data[]) {
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

// ======= Shell sort (viration of Insertion sort) =======
// case: pass2, gap:2			 i -->
//							 <-- j
// data [0] [1] [2] [3] [4] [5] [6] [7] [8]
//		 1   2   3   4   10  12  5   6
//					 	 ^	     |
//					     |_______|
// learn from https://www.dyclassroom.com/sorting-algorithm/shell-sort
// =======================================================
void mysort::shellsort(int data[]) {
	int gap, i, j, tmp;
	for (gap = size/2; gap>0; gap /= 2) { // gap=size/2 (round down)
		for (i = gap; i < size; i++) { // 
			tmp = data[i];
			// if function can be replace by for/while
			// compare current element with front gap value
			// ALA front gap value is not larger, forloop won't be continue
			for (j = i; j - gap >= 0 && data[j - gap] > tmp; j-=gap) 
				data[j] = data[j-gap];
			data[j] = tmp;
		}
	}
}

// return pivot (index of right position)
int mysort::partition(int data[], int left, int right) {
	int i = left, j = right;
	int pivot = left; //first element as pivot
	while (true) {
		//index of fist element larger than first element from left
		while ((data[i] <= data[pivot]) && (i<right)) //add a equal condition to avoid i = pivot
			i++;
		//fist element small/equal than first element search from right
		while (data[j] >  data[pivot])
			j--;

		if (i >= j) {
			swap(&data[pivot], &data[j]);
			pivot = j;
			return pivot;
		}
		swap(&data[i], &data[j]);
	}
}

void mysort::quicksort1(int data[], int left, int right) {
	int pivot;
	if (left < right) { //prevent only one element enter
		pivot = partition(data, left, right);
		quicksort1(data, left, pivot - 1);
		quicksort1(data, pivot + 1, right);
	}
}

void mysort::quicksort2(int data[], int left, int right) {

} 
//============== Mergesort(recursive method) ===================
//merge and sort subarrays to reconstruct array from index right to left
const int Max = 1000;
void mysort::merge(std::vector<int>& vec, int left, int right, int mid) {
	//
	std::vector<int> leftArray(vec.begin()+left, vec.begin()+mid+1);
	std::vector<int> rightArray(vec.begin()+mid+1, vec.begin()+right+1);
	//
	leftArray.insert(leftArray.end(), Max);
	rightArray.insert(rightArray.end(), Max);
	//
	int idxLeft=0, idxRight = 0;
	for (int i = left; i <= right;i++) {
		if (leftArray[idxLeft] <= rightArray[idxRight]) {
			vec[i] = leftArray[idxLeft];
			idxLeft++;
		}else {
			vec[i] = rightArray[idxRight];
			idxRight++;
		}
	}
}

void mysort::mergesort(std::vector<int>& vec, int left, int right) {
	if (left < right) { //prevent only one element enter 
		int mid = left + (right - left) / 2;
		//detach an array to subarrays
		mergesort(vec, left, mid);
		mergesort(vec, mid + 1, right);
		//merge and sort subarrays
		merge(vec, left, right, mid);
	}
}
