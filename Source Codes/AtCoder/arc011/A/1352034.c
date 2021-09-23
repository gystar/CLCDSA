#include <stdio.h>

int main(void){
    int m, n, N;
    scanf("%d %d %d", &m, &n, &N);
    int ans = N;
    while(N>=m){
        int a = n*(N/m);
        N = N%m + a;
        ans += a;
    }

    printf("%d\n", ans);
    return 0;
} 