#include <stdio.h>

int main(void) {

	printf("size of short : %zu byte(s)\n", sizeof(short));

	printf("size of unsigned short : %zu byte(s)\n", sizeof(unsigned short));

	printf("size of int : %zu byte(s)\n", sizeof(int));

	printf("size of unsigned int : %zu byte(s)\n", sizeof(unsigned int));

	printf("size of long : %zu byte(s)\n", sizeof(long));

	printf("size of unsigned long : %zu byte(s)\n", sizeof(unsigned long));

	printf("size of long long : %zu byte(s)\n", sizeof(long long));

	printf("size of unsigned long long : %zu byte(s)\n", sizeof(unsigned long long));

	return 0;
}