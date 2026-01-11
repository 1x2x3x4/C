#include <stdio.h>
#include <stdbool.h>

int main(void) {

	/*bool is_weather_sunny = false;
	bool is_venue_available = true;

	if (is_weather_sunny && is_venue_available) {
		printf("活动如期举行！！！\n");
	}
	else {
		printf("活动不能如期举行！！！\n");

		if (!is_weather_sunny) {
			printf("失败原因：天气不晴朗\n");
		}

		if (!is_venue_available) {
			printf("失败原因：场地不可用\n");
		}
	}*/


	bool has_coupon = true;
	bool is_special_event = false;

	if (has_coupon || is_special_event) {
		printf("在餐馆吃饭\n");
	}
	else {
		printf("在家吃饭\n");
	}


	return 0;
}