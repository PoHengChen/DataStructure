#include <iostream>
#include "data_type.h"

using namespace N;

using namespace std;

void data_type::print_datatype() {
	
	// 1 byte
	cout << "Size of char: " << sizeof(char) << "byte" << endl;
	cout << "Size of unsigned char: " << sizeof(unsigned char) << "byte" << endl;
	cout << "Size of signed char: " << sizeof(signed char) << "byte" << endl;

	// 2 byte
	cout << "Size of short int: " << sizeof(short int) << "byte" << endl;
	cout << "Size of unsigned short int: " << sizeof(unsigned short int) << "byte" << endl;

	// 4 byte
	cout << "Size of int: " << sizeof(int) << "byte" << endl;
	cout << "Size of unsigned int: " << sizeof(unsigned int) << "byte" << endl;

	cout << "Size of long int: " << sizeof(long int) << "byte" << endl;
	cout << "Size of signed long int: " << sizeof(signed long int) << "byte" << endl;
	cout << "Size of unsigned long int: " << sizeof(unsigned long int) << "byte" << endl;
	cout << "Size of float: " << sizeof(float) << "byte" << endl;


	// 8 byte
	cout << "Size of double: " << sizeof(double) << "byte" << endl;



	cout << "Size of wchar_t : " << sizeof(wchar_t) << "byte" << endl;
}