#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>
#include <stdbool.h>

void print_binary(uint8_t num);

int main(void) {
	
	//模拟LED灯练习 1故障 1低电量 0wifi 0电源

	uint8_t status = 0b00001100;	//初始状态
	printf("Initial status: 0b");
	print_binary(status);
	printf("\n");

	printf("关闭低电量: 0b");
	status = status & 0b11111011;
	print_binary(status);
	printf("\n");

	printf("电路正常：0b");
	status = status ^ 0b00001011;
	print_binary(status);
	printf("\n");

	printf("关闭WIFI，电源: 0b");
	status = status & 0b11111000;
	print_binary(status);
	printf("\n");

	printf("打开电源: 0b");
	status = status | 0b00000001;
	print_binary(status);
	printf("\n");


	return 0;
}

void print_binary(uint8_t num) {
	for (int index = 7; index >= 0; index--) {
		printf("%d", (num >> index) & 1);
	}
}