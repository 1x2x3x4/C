#include <stdio.h>
#include <float.h>

int main(void) {

	float Max_float = FLT_MAX;

	float overflow_float = FLT_MAX * 1000;

	float Min_float = FLT_MIN;

	float underflow_float = FLT_MIN / 1000;

	printf("Max_float is: %e\n", Max_float);
	printf("overflow_float is: %e\n", overflow_float);
	printf("Min_float is: %e\n", Min_float);
	printf("underflow_float is: %e\n", underflow_float);


}