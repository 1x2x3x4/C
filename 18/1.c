#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

int main(void) {

	uint32_t apple = 5;
	uint32_t orange = 20;

	printf("苹果箱里面有：%"PRId32"\n", apple);
	printf("橘子箱里面有：%"PRId32"\n", orange);

	uint32_t total_fruit = apple + orange;

	printf("总计：%"PRId32"\n", total_fruit);

}