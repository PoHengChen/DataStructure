#include "sort.h"
#define size 6

void bubblesort2(int data[]) {
	bool flag = 0;
	for (int i = size - 1; i > 0; i--) { // n elements need (n-1) times data scans
		for (int j = 0; j < i; j++) {
			if (data[j] > data[j + 1]) {
				int tmp = data[j];
				data[j] = data[j + 1];
				data[j + 1] = tmp;
				flag = 1;
			}
		}
		if flag
			break;
	}
}