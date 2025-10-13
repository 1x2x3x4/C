#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int number = 100;

	//printf("left align£º%-10d|\n", number);

	//printf("rigin align£º%10d|\n", number);

	//printf("leading zeros£º%010d\n", number);

	printf("please input number£º\n");
		
	scanf("%d", &number);

	printf("your input number£º%d\n", number);

	return 0;
}