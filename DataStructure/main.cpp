// author: PoHeng Chen edit on 13/10/2019

#include <iostream>
#include <iomanip>
#include <vector>
#include "mysort.h"
#include "data_type.h"
#include "bit_wise.h"

#define size 6

using namespace std;
using namespace N;


int main() {
/*
	int data[size] = { 6,5,9,7,2,8 };
	int data1[size] = { 6,5,9,7,2,8 };

	mysort sort1;
	sort1.showdata(&data[0]);

	//sort1.bubblesort(&data[0]);
	//sort1.bubblesort2(&data[0]);
	//sort1.selectionsort(&data[0]);

	//sort1.insertionsort(&data[0]);
	//sort1.shellsort(&data[0]);

	sort1.quicksort1(&data[0], 0, size-1);
	//vector<int> vec(data, data + sizeof(data) / sizeof(int));
	//sort1.mergesort(vec, 0, size - 1);

	//sort1.showdata(&vec[0]);
	sort1.showdata(&data[0]);
	//sort1.showdata(data1);
*/

	// data_type
	/*data_type test;
	test.print_datatype();*/

	// bitwise operation
	bit_wise test;
	test.bit_wise_operation();

	return true;
}


