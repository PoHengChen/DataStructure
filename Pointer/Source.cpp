#include <iostream>
using namespace std;

int main() {
	//int b = 2;
	//int* p; //initialize a pointer
	//p = &b; //*p = b;
	//cout << p << endl; //memory location
	//cout << *p << endl;//pointed memory value
	//*p = 3;
	//cout << b << endl;

	//int data = 2;
	//int *p = nullptr;
	//p = &data;
	//cout << p << endl; //pointed memory location
	//cout << *p << endl; //pointed memory location value
	//cout << &p << endl; //own memory location

	int data = 2;
	//int* p = &data;
	int* p = nullptr;
	p = &data;
	cout << *p << endl;
}