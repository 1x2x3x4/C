#include <stdio.h>
#include <stdbool.h>

int main(void) {

	//	1.如果用户是VIP，且消费金额大于100，则提供折扣20%
	//	2.如果用户不是VIP，且消费金额大于100，则提供折扣10%
	//	3.如果用户的消费金额不超过20，则没有折扣
	//	特殊情况，如果用户是VIP，但消费金额不超过100，则提供折扣5%

	double cart_total;
	bool is_vip;
	float discount = 0.0;

	cart_total = 60;
	is_vip = true;

	if (cart_total <= 20) {
		discount = 0.0;
	}
	else if (is_vip) {
		if (cart_total > 100) {
			discount = 0.20;
		}
		else {
			discount = 0.05;
		}
	}	
	else {
		if (cart_total > 100) {
			discount = 0.10;
		}
		else {
			discount = 0.0;
		}
	}

	printf("最终折扣为：%.2f\n", discount);

	return 0;
}