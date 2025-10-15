#include <stdio.h>
#include <stdint.h>


int main(void) {

	/*__int32 number = 1000;

	long number_1 = 100;

	unsigned long number_2 = 200;

	long long number_3 = 300;

	unsigned long long number_4 = 400;

	printf("%ld\n", number_1);

	printf("%lu\n", number_2);

	printf("%lld\n", number_3);

	printf("%llu\n", number_4);*/

	int16_t myint16 = 32767;

	uint16_t myUint16 = 65535U;

	int32_t myint32 = 2147483647;

	uint32_t myUint32 = 4294967295U;

	int64_t myint64 = 9223372036854775807LL;

	uint64_t myUint64 = 18446744073709551615ULL;

	printf("size of int16_t : %zu\n", sizeof(myint16));

	printf("size of uint16_t : %zu\n", sizeof(myUint16));

	printf("size of int32_t : %zu\n", sizeof(myint32));

	printf("size of uint32_t : %zu\n", sizeof(myUint32));

	printf("size of int64_t : %zu\n", sizeof(myint64));

	printf("size of uint64_t : %zu\n", sizeof(myUint64));


	return 0;

}