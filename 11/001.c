#include <stdio.h>

int main(void) {

	__int32 number = 1000;

	long number_1 = 100;

	unsigned long number_2 = 200;

	long long number_3 = 300;

	unsigned long long number_4 = 400;

	printf("%ld\n", number_1);

	printf("%lu\n", number_2);

	printf("%lld\n", number_3);

	printf("%llu\n", number_4);


	return 0;

}