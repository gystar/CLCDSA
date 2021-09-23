#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[])
{
    int i, j, N, K, v, list[5][5], r;
    scanf("%d", &N);
    scanf("%d", &K);
    for ( i = 0; i < N; i++ ){
        for ( j = 0; j < K; j++ ){
            scanf("%d", &list[i][j]);
        }
    }

    for ( i = 0; i < (int)pow(K,N); i++ ){
        for ( v = i, j = N-1, r = 0; j >= 0; j-- ){
            int idx = v/(int)pow(K,j);
            v -= (int)pow(K,j)*idx;
            r ^= list[j][idx];
        }
        if ( r == 0 ){
            printf("Found\n");
            return 0;
        }
    }
    printf("Nothing\n");
    return 0;
} 