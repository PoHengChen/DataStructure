// Author: Po-Heng Chen on 23/Oct/2019
// This program shows:
//		- vector pass by value in funtion
//		- vector pass by reference in function
#include <iostream>
#include <vector>
using namespace std;

void passByValue(vector<int> blah) {
	for (int i = 1; i <= 10; i++) 
		blah.push_back(i); //push element at the end of vector
	for (int j = 0; j < 10;j++) 
		cout << blah[j] << endl;
}

void passByReference(vector<int>& blah) { 
	for (int i = 1; i <= 10; i++) 
		blah.push_back(i);
}

int main() {
	//pass by value, print in funtion
	vector<int> numbers1;
	passByValue(numbers1);

	//pass by reference, print in main
	vector<int> numbers2;
	passByReference(numbers2);
	for (int i = 0; i < 10; i++) 
		cout << numbers2[i] << endl;

	return 0;
}