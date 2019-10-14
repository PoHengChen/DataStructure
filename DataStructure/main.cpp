// author: PoHeng Chen edit on 13/10/2019

#include <iostream>
#include <iomanip>
#include "sort.h"

#define size 6
using namespace std;

int main() {
	int data[size] = { 6,5,9,7,2,8 };
	//bubblesort(data);
	//bubblesort2(data);
	//selectionsort(data);
	insertionsort(data);
	//shellsort(data);

	showdata(data);
	return true;
}

void showdata(int data[]) {
	for (int i = 0; i < 6; i++)
		cout << setw(3) << data[i];
	cout << endl;
}
