#include <stdio.h>

int main(void) {

	//float Temperature = 12.34f;
	//float Humidity = 34.56f;

	//float speed_of_sound = 34.56e2f;
	//float length = 12.34f, width = 56.78f, height = 91.1f;

	//printf("Temperature is %f\n", Temperature);
	//printf("Humidity is %f\n", Humidity);
	//printf("speed of sound is %f\n", speed_of_sound);
	//printf("cube is %f x %f x %f\n", length, width, height);
	
	//会丢失精度，使用double会缓解

	float num = 345.6f;

	printf("Using %%f: %f\n", num);

	//科学计数法
	printf("Using %%e: %e\n", num);
	printf("Using %%E: %E\n", num);

	//十六进制浮点数 p计数法
	printf("Using %%a: %a\n", num);
	printf("Using %%A: %A\n", num);


}