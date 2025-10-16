#include <stdio.h>
#include <stdint.h>

int main(void) {
	
	//type Conversion 隐式转换 无符号到有符号 显式转换
	uint32_t uNum = UINT32_MAX;
	int32_t Num = (int32_t)uNum;

	printf("uint32_t : %u\n", uNum);
	printf("conversion to int32_t : %d\n", Num);

	//从大范围转换到小范围
	int64_t longNum = 5000;
	int16_t shortNum = (int16_t)longNum;

	printf("int64_t : %lld\n", longNum);
	printf("conversion to int16_t : %hd\n", shortNum);

	//从小范围转换到大范围（含负数）
	int16_t smallNum = -1;
	uint32_t bigNum = (uint32_t)smallNum;

	printf("int16_t : %hd\n", smallNum);
	printf("conversion to uint64_t : %d", bigNum);


	return 0;

}