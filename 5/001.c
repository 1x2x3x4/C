#include <stdio.h>

int main(void)
{	
	//integer 定义一个变量（初始化） 这个变量是可以不断变化的
	int sum_flower = 9000;

	sum_flower = 9100;

	//""里面的任意字符都可能影响到下一行，也包括空格
	printf("1.sum_flower的值为%d\n", sum_flower);

	sum_flower = 9200;

	printf("2.sum_flower的值为%d\n", sum_flower);

	sum_flower = 9300;

	printf("3.sum_flower的值为%d\n", sum_flower);

	return 0;

}