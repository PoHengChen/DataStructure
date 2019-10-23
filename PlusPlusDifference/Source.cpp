#include <iostream>

int main() {
	int a = 2, b = 2,c = 2, d = 2;
	a++;
	++b;
	printf("a = %d",a);//3
	printf("b = %d",b);//3
	printf("%d", c++);//2
	printf("%d", ++d);//3
}