#include <stdio.h>
#include <stdint.h>	//标准整数类型
#include <inttypes.h>

int main(void) {

	//int_leastN_t
	//至少有N位，可能更多，适用于需要保证最小存储容量的可移植性
	// 
	//int_fastN_t
	//至少有N位，但是选择运算最快的类型，适用于需要性能敏感的场景
	
	//标准整数类型 -> 固定宽度整数类型
	//固定的位数，不可以越界，适用于需要精确数据大小的场景

	int_least32_t playerScore = 5000;

	int_fast16_t pixelValue = 300;

	int32_t exactId = 123456789;

	printf("pixelValue is %"PRIdFAST16"\n", pixelValue);

	return 0;
}