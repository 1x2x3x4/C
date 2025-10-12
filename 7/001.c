#include <stdio.h>
int main(void) {

	int number = 100;

	printf("Decimal: %d\n", number);

	printf("Octal: %o\n", number);

	printf("Hexadecimal(lowercase): %#x\n", number);

	printf("Hexadecimal(uppercase): %#X\n", number);

	return 0;

	/*
	关于不同进制的表示方法，以及十六进制的大小写写法（加#可表示0X....）
	*/
}