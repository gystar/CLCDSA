#include <stdio.h>

int main(void)
{
    int N, D, K, L[10000], R[10000], S, T, i, j;

    scanf("%d %d %d", &N, &D, &K); 
    for(i=0; i<D; i++) {
        scanf("%d %d", &L[i], &R[i]);
    }
    for(i=0; i<K; i++) {
        scanf("%d %d", &S, &T);
        if(S <= T) {
            for(j=0; j<D; j++) {
                if(L[j]<=S && S<=R[j]) {
                    if(L[j]<=T && T<=R[j]) {
                        printf("%d\n", j+1);
                        break;
                    }else {
                        S = R[j];
                    }
                }
            }
        }else {
            for(j=0; j<D; j++) {
                if(L[j]<=S && S<=R[j]) {
                    if(L[j]<=T && T<=R[j]) {
                        printf("%d\n", j+1);
                        break;
                    }else {
                        S = L[j];
                    }
                }
            }
        }
    }

    return 0;
} 