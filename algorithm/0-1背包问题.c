#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define MAXN 100

int capacity;
int n;

int weight[MAXN + 1];
int value[MAXN + 1];

int pick[MAXN + 1];			//当前选择：pick[i] = 1 选，0 不选
int bestPick[MAXN + 1];

int currentWeight = 0;
int currentValue = 0;
int bestValue = 0;

int remainingValue = 0;

void readInput() {
	printf("请输入背包的容量：\n");
	scanf("%d", &capacity);

	printf("请输入物品的数量：\n");
	scanf("%d", &n);

	printf("请输入每个物品的重量（使用空格分隔）：\n");
	for (int i = 1; i <= n; i++) {
		scanf("%d", &weight[i]);
	}
	
	printf("请输入每个物品的价值（使用空格分隔）：\n");
	remainingValue = 0;
	for (int i = 1; i <= n; i++) {
		scanf("%d", &value[i]);
		remainingValue += value[i];
	}

	//初始化数组
	for (int i = 1; i <= n; i++) {
		pick[i] = 0;
		bestPick[i] = 0;
	}

}

void backtrack(int i) {

	if (i > n) {
		if (currentValue > bestValue) {
			bestValue = currentValue;
			for (int k = 1; k <= n; k++) {
				bestPick[k] = pick[k];
			}
		}
		return;
	}

	remainingValue -= value[i];
	if (currentWeight + weight[i] <= capacity) {	//选
		pick[i] = 1;
		currentWeight += weight[i];
		currentValue += value[i];

		backtrack(i + 1);

		currentWeight -= weight[i];
		currentValue -= value[i];
	}

	if (currentValue + remainingValue > bestValue) {
		pick[i] = 0;
		backtrack(i + 1);
	}
	remainingValue += value[i];

}

void printAnswer() {
	int totalW = 0;
	printf("\n最优总价值 bestValue = %d\n", bestValue);

	printf("选择方案 bestPick（1=选，0=不选）：[");
	for (int i = 1; i <= n; i++) {
		printf("%d%s", bestPick[i], (i == n ? "" : ", "));
		if (bestPick[i] == 1) totalW += weight[i];
	}
	printf("]\n");

	printf("最优总重量 totalWeight = %d\n", totalW);

	printf("选中的物品编号：");
	for (int i = 1; i <= n; i++) {
		if (bestPick[i] == 1) printf(" %d", i);
	}
	printf("\n");
}

int main(void) {
	readInput();
	backtrack(1);
	printAnswer();

	return 0;
}