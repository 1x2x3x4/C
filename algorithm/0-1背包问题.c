#include <stdio.h>
#include <stdlib.h>

/* 全局变量（为了让回溯逻辑更清楚） */
int capacity;      // 背包容量
int n;             // 物品数量

int* w;            // 动态数组：物品重量
int* v;            // 动态数组：物品价值

int currentW = 0;  // 当前背包重量
int currentV = 0;  // 当前背包价值

int* choice;       // 当前选择方案
int* bestChoice;   // 最优选择方案
int bestV = 0;     // 最优价值

int remainV = 0;   // 剩余物品价值（剪枝用）

/* 回溯函数 */
void backtrack(int i) {
    // 所有物品都考虑完
    if (i > n) {
        if (currentV > bestV) {
            bestV = currentV;
            for (int k = 1; k <= n; k++) {
                bestChoice[k] = choice[k];
            }
        }
        return;
    }

    // 进入第 i 层，减少剩余价值
    remainV -= v[i];

    /* 选择第 i 个物品 */
    if (currentW + w[i] <= capacity) {
        choice[i] = 1;
        currentW += w[i];
        currentV += v[i];

        backtrack(i + 1);

        // 回溯
        currentW -= w[i];
        currentV -= v[i];
    }

    /* 不选择第 i 个物品（剪枝） */
    if (currentV + remainV > bestV) {
        choice[i] = 0;
        backtrack(i + 1);
    }

    // 离开第 i 层，恢复 remainV
    remainV += v[i];
}

int main() {
    /* ---------- 固定测试案例（数值 < 5） ---------- */
    n = 4;
    capacity = 4;

    w = (int*)malloc((n + 1) * sizeof(int));
    v = (int*)malloc((n + 1) * sizeof(int));
    choice = (int*)malloc((n + 1) * sizeof(int));
    bestChoice = (int*)malloc((n + 1) * sizeof(int));

    // 物品数据（下标从 1 开始）
    w[1] = 1;  v[1] = 2;
    w[2] = 2;  v[2] = 2;
    w[3] = 3;  v[3] = 4;
    w[4] = 2;  v[4] = 3;

    // 初始化
    remainV = 0;
    for (int i = 1; i <= n; i++) {
        choice[i] = 0;
        bestChoice[i] = 0;
        remainV += v[i];
    }
    /* -------------------------------------------- */

    backtrack(1);

    /* 输出结果 */
    printf("背包容量 = %d\n", capacity);
    printf("最大价值 bestV = %d\n", bestV);

    printf("最优选择方案（1选 / 0不选）：\n");
    for (int i = 1; i <= n; i++) {
        printf("%d ", bestChoice[i]);
    }
    printf("\n");

    printf("选中的物品编号：");
    int totalW = 0;
    for (int i = 1; i <= n; i++) {
        if (bestChoice[i] == 1) {
            printf("%d ", i);
            totalW += w[i];
        }
    }
    printf("\n总重量 = %d\n", totalW);

    /* 释放内存 */
    free(w);
    free(v);
    free(choice);
    free(bestChoice);

    return 0;
}
