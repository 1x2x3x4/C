#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>
#include <stdbool.h>

int main(void) {

	uint8_t num = 25;
	uint8_t result;

	printf("original number is binary(00011001):%" PRId8 "\n", num);

	//左移
	result = num << 2;

	printf("leftshift number is binary(01100100):%" PRId8 "\n", result);

	//右移
	result = num >> 2;

	printf("rightshift number is binary(00000110):%" PRId8 "\n", result);

	printf("\n");
	printf("\n");
	printf("\n");

	//关系运算符

	int number_1 = 10;
	int number_2 = 20;

	//bool greater = number_1 > number_2;
	//printf("a > b is %d\n", greater);

	//bool less = number_1 < number_2;
	//printf("a < b is %d\n", less);

	//bool equal = number_1 == number_2;
	//printf("a == b is %d\n", equal);

	//bool not_equal = number_1 != number_2;
	//printf("a != b is %d\n", not_equal);

	//bool greater_or_equal = number_1 >= number_2;
	//printf("a >= b is %d\n", greater_or_equal);

	//bool less_or_equal = number_1 <= number_2;
	//printf("a <= b is %d\n", less_or_equal);

	printf("\n");
	printf("\n");
	printf("\n");

	//三元运算符
	//aaa ? bbb : ccc

	bool greater = number_1 > number_2;
	printf("a > b is %s\n", greater ? "true" : "false");

	bool less = number_1 < number_2;
	printf("a < b is %s\n", less ? "true" : "false");

	bool equal = number_1 == number_2;
	printf("a == b is %s\n", equal ? "true" : "false");

	bool not_equal = number_1 != number_2;
	printf("a != b is %s\n", not_equal ? "true" : "false");

	bool greater_or_equal = number_1 >= number_2;
	printf("a >= b is %s\n", greater_or_equal ? "true" : "false");

	bool less_or_equal = number_1 <= number_2;
	printf("a <= b is %s\n", less_or_equal ? "true" : "false");

}