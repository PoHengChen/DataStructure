// Author: Po-Heng Chen on 23/Oct/2019
// This program shows:
//		- how to declare pointer (in one line)
//		- difference between p, *p, &p
//		- how to pass by reference in function parameter
//		- how to pass array by reference (pointer point to first element location of array)

#include <iostream>
#include <iomanip>

#define size 6
using namespace std;

void swap(int* x, int* y) {//new ptr point to passed memory
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}

void bubblesort(int* p) { //use pointer to control passed memory
	for (int i = size - 1; i > 0; i--) { // n elements need (n-1) times data scans
		for (int j = 0; j < i; j++) {
			if (*(p+j) > *(p+j+1)) {
			  /*int temp;
				temp = *(p+j);
				*(p+j) = *(p+j+1);
				*(p+j+1) = temp;*/
				swap((p + j) , (p + j + 1));//pass memory
			}
		}
	}
}

int main() {
	int data[size] = {6,5,9,7,2,8};
	//int* p;
	//p = &data;
	//p = data;
	//p = &data[0];
	int* p = &data[0];
	cout << *(p + 1) << endl;
	if (*p > 1)
		cout << "yoyoyo" << endl;
	//bubblesort(data);
	bubblesort(&data[0]); //pass memory
	cout << data[0] << endl;
	cout << data[1] << endl;
	cout << data[2] << endl;
	cout << data[3] << endl;
	cout << data[4] << endl;
	cout << data[5] << endl;
	return true;
}

//void swap(int* y) {
//
//}
//
//void bubblesort(int* p) {
//	//swap(&p[j]);
//
//}
//
//int main() {
//	//int data[size] = { 6,5,9,7,2,8 };
//	int data = 2;
//	bubblesort(&data);
//	return true;
//}