#include <iostream>
#include "bit_wise.h"

using namespace std;

void bit_wise::bit_wise_operation(){
	int i = 0b00000000;
	cout << i << endl;
	char j = 0b00000000;
	char k = 0b10101010;
	k = j ^ k;
	cout << k << endl;
}
