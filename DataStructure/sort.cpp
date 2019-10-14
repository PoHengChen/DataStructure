// Bubble sort
// author: PoHeng Chen edit on 13/10/2019

#include <iostream>
#define size 6
int main() {
	int data[size] = {6,5,9,7,2,8};
	for (int i = size-1; i > 0; i--) { // n elements need (n-1) times data scans
		for (int j = 0; j < i; i++ ) {
			if (data[j] > data[j+1]) {
				int tmp = data[j];
				data[j] = data[j + 1];
				data[j + 1] = tmp;
			}
		}
	}
	cout << data << endl;
	return true;
}