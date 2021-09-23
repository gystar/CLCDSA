#include <stdio.h>
#include <stdlib.h>
#define size 102000
// ???
int main(int argc, char const *argv[]) {
    // ??
    int R, C, K, N;
    // ??
    scanf("%d %d %d %d", &R, &C, &K, &N);
    // ??
    int r[size], c[size];
    int candyInRow[size], candyInColumn[size];
    // ?????????????????????
    for (size_t i = 0; i < N; i++) {
        scanf("%d %d", &r[i], &c[i]);
        r[i]--; c[i]--;
        candyInRow[r[i]]++;
        candyInColumn[c[i]] ++;
    }
    // ?????????????????????
    int rowCount[size], columnCount[size];
    for (size_t i = 0; i < R; i++) {
        rowCount[candyInRow[i]]++;
    }
    for (size_t i = 0; i < C; i++) {
        columnCount[candyInColumn[i]]++;
    }
    long ans = 0;
    for (size_t i = 0; i <= K; i++) {
        ans += rowCount[i]*columnCount[K-i];
    }
    // ????
    for (size_t i = 0; i < N; i++) {
        if (candyInRow[r[i]]+candyInColumn[c[i]] == K+1) {
            ans ++;
        }
        if (candyInRow[r[i]]+candyInColumn[c[i]] == K) {
            ans --;
        }
    }
    // ??
    printf("%ld\n", ans);
    return 0;
} 