#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

int main(void) {

	// if
	float current_temperature = 37.2f;

	if (current_temperature > 37) {
		printf("天气很热\n");
	}
	else {
		printf("天气比较热\n");
	}


	return 0;

}