#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int longestCommonSubsequence(const char* text1, const char* text2) {

    int n = strlen(text1);
    int m = strlen(text2);

    int** dp = (int**)malloc((n + 1) * sizeof(int*));
    for (int i = 0; i <= n; i++) {
        dp[i] = (int*)malloc((m + 1) * sizeof(int));
    }

    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= m; j++) {
            dp[i][j] = 0;
        }
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {

            if (text1[i - 1] == text2[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1] + 1;
            }
            else {
                if (dp[i - 1][j] > dp[i][j - 1]) {
                    dp[i][j] = dp[i - 1][j];
                }
                else {
                    dp[i][j] = dp[i][j - 1];
                }
            }
        }
    }

    int result = dp[n][m];

    for (int i = 0; i <= n; i++) {
        free(dp[i]);
    }
    free(dp);

    return result;

}

int main(void) {

    printf("最长公共子序列长度为：%d\n", longestCommonSubsequence("ace", "abced"));
    return 0;
}