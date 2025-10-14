#include <stdio.h>

int main(void) {

	//int number = -100;
	// 
	//printf("number：%d\n", number);

	//unsigned int positionNum = 100;

	//无符号整型（只能输出 0 - 4,294,967,296）
	//printf("positionNum：%u\n", positionNum);

	short myshort = 200;

	printf("input myshort is : %hd\n", myshort);

	unsigned short screenWidth = 800;
	unsigned short screenHeight = 600;

	printf("screen resolution is : %hu x %hu\n", screenWidth, screenHeight);

	unsigned short x = 300;
	unsigned short y = 400;

	printf("current position is : (%hu, %hu)\n", x, y);

	unsigned short color = 0b0111100000000000;

	printf("Red : 0x%X", color);

	return 0;

}