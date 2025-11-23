#include <stdio.h>
#include <math.h>
#include <float.h>
#include <stdbool.h>
#define PI 3.14

int main(void) {
	//正无穷大
	float positive_infinity = INFINITY;
	printf("positive_infinity is: %f\n", positive_infinity);

	//负无穷大
	float negative_infinity = -INFINITY;
	printf("negative_ininity is: %f\n", negative_infinity);

	float num = 1.0f;
	float infinity = num / 0.0f;
	printf("1.0 / 0.0: %f\n", infinity);

	//NaN
	//float NaN = 0.0f / 0.0f;
	//printf("0.0 / 0.0: %f", NaN);

	//负数的平方根
	float negative_sqrt = sqrt(-1.0f);
	printf("negative_sqrt: %f\n", negative_sqrt);

	printf("\n");
	printf("\n");
	printf("\n");


	double num1 = 123.456;
	double num2 = 456.543;

	long double ld_val = 123.45678978979878L;

	double sum = num1 + num2;
	double subtraction = num1 - num2;
	double multiplication = num1 * num2;
	double division = num1 / num2;

	printf("sum is: %lf\n", sum);
	printf("subtraction is: %f\n", subtraction);
	printf("multipication is: %f\n", multiplication);
	printf("divsion is: %f\n", division);

	printf("ld_val is: %Lf", ld_val);

	printf("\n");
	printf("\n");
	printf("\n");

	// float 和 double 的有效精度对比
	/*
	 * 原理：IEEE 754 浮点数由阶码和尾数构成。
	 *
	 * 对于二进制浮点数：
	 *   - float：23 位显式尾数 + 1 位隐藏位，共 24 位有效二进制数字
	 *   - double：52 位显式尾数 + 1 位隐藏位，共 53 位有效二进制数字
	 *
	 * 大致对应的十进制有效数字个数：
	 *   24 / log2(10) ≈ 7.22  → float 约 7 位有效数字
	 *   53 / log2(10) ≈ 15.95 → double 约 16 位有效数字
	 *
	 * C 标准里给出的保守值：
	 *   FLT_DIG = 6   // float 至少保证 6 位十进制有效数字
	 *   DBL_DIG = 15  // double 至少保证 15 位十进制有效数字
	 *
	 * 因此打印和处理精度时，通常按照 FLT_DIG / DBL_DIG 这两个保守值来设计。
	 */

	float float_num = 1.0f / 3.0f;
	double double_num = 1.0 / 3.0;

	printf("float_num is: %.20f\n", float_num);
	printf("double_num is: %.20lf\n", double_num);

	printf("Define precision max_float: %d\n", FLT_DIG);
	printf("Define prescsion max_double: %d\n", DBL_DIG);

	printf("\n");
	printf("\n");
	printf("\n");

	//转义序列练习
	printf("这是一段文字\n\t这是一段带有缩进的文字\n\t\t这是带有很大缩进的文字\n");

	bool is_game_over = false;
	bool is_game_won = true;

	printf("\n");
	printf("\n");
	printf("\n");

	//const 常量
	//不能同一函数作用域中重复定义
	const int MAX_USERS = 100;
	printf("MAX_USERS: %d\n", MAX_USERS);
	printf("PI: %lf\n", PI);

	return 0;
}