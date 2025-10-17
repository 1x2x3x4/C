#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

int main(void) {

	//固定宽度整型
	int8_t myint8 = INT8_MAX;
	int32_t myint32 = INT32_MAX;
	uint32_t myuint32 = UINT32_MAX;
	uint64_t myuint64 = UINT64_MAX;
	
	printf("int8_t is : % "PRId8"\n", myint8);
	printf("int32 is : % "PRId32"\n", myint32);
	printf("uint32 is : % "PRIu32"\n", myuint32);
	printf("uint64 is : % "PRIu64"\n", myuint64);

	return 0;
}