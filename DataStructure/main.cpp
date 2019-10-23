// author: PoHeng Chen edit on 13/10/2019

#include <iostream>
#include <iomanip>
#include <vector>
#include "mysort.h"

#define size 6

using namespace std;



int main() {
	int data[size] = { 6,5,9,7,2,8 };
	mysort sort1;
	sort1.showdata(&data[0]);

	//sort1.bubblesort(&data[0]);
	//bubblesort2(data);
	//selectionsort(data);
	//insertionsort(data);
	//sort1.shellsort(data);
	//sort1.quicksort1(data, 0, size-1);

	vector<int> vec(data, data + sizeof(data) / sizeof(int));
	sort1.mergesort(vec, 0, size - 1);
	sort1.showdata(&vec[0]);
	//sort1.showdata(data);
	return true;
}


