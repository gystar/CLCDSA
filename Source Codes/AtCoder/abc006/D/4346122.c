#include <stdio.h>
#include <string.h>
#define N_max 30002
#define Infinity 100000
int C[N_max];
int DP[N_max];
// ????????????
int calc_LIS (int N, int C[]) {
    DP[0] = -Infinity;
    // ??????
    for (size_t i = 1; i <= N; i++) {DP[i] = Infinity;}

    int length = 0; // ?????
    int left, right, mid;
    // ??????
    for (int i = 1; i <= N; i++) {
        if (C[i] > DP[length]) {
            DP[length+1] = C[i];
            length ++;  // ????????
        } else {    // ????
            left = 0; right = length; mid = (left+right)/2;
            while (left < right-1) {
                if (C[i] < DP[mid]) {
                    right = mid;
                } else {
                    left = mid;
                }
                mid = (left+right)/2;
            }
            DP[right] = C[i];
        }
    }

    return length;
}

int main(int argc, char const *argv[]) {
    // ??
    int N;  // ??????
    scanf("%d", &N );
    // ??
    for (size_t i = 1; i <= N; i++) {
        scanf("%d", &C[i] );
    }
    // ????????????
    calc_LIS(N, C);
    int ans;
    ans = N-calc_LIS(N, C);
    // ??
    printf("%d\n", ans );
    return 0;
} 