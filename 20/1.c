#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

int main(void) {

	int32_t result;
	int32_t value = 5;


	//后缀递增：优先将右值传给左值后，右值再自增
	result = value++;

	printf("After postfix increment, result is %"PRId32", value is %"PRId32"\n", result, value);

	value = 5;

	//前缀递增：优先将右值自增后，传给左值
	result = ++value;

	printf("After postfix increment, result is %"PRId32", value is %"PRId32"\n", result, value);

	value = 5;

	//后缀递减：优先将右值传给左值，右值再自减
	result = value--;

	printf("After postfix increment, result is %"PRId32", value is %"PRId32"\n", result, value);

	value = 5;

	//前缀递减：优先将右值自减后，传给左值
	result = --value;

	printf("After postfix increment, result is %"PRId32", value is %"PRId32"\n", result, value);

	



}