#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int number = 100;

	//printf("left align��%-10d|\n", number);

	//printf("rigin align��%10d|\n", number);

	//printf("leading zeros��%010d\n", number);

	printf("please input number��\n");
		
	scanf("%d", &number);

	printf("your input number��%d\n", number);

	return 0;
}