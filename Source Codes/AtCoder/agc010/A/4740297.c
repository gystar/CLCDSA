#include <stdio.h>

int main(void) {
    int i, N, O;
    long long A[100010];
    scanf("%d", &N);
    O = 0;
    for (i=0;i<N;i++) {
        scanf("%lld", &A[i]);
        if (A[i]%2) O++;
    }
    if (O%2) printf("NO\n");
    else printf("YES\n");
    
    return 0;
} 