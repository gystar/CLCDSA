#include <stdio.h>

int main(int argc, char *argv[])
{
    int N, Q;
    int i, list[200000] = {0}, n = 0;
    int same[200000] = {0};
    scanf("%d %d", &N, &Q);
    for ( i = 0; i < Q; i++ ){
        int l, r;
        scanf("%d %d", &l, &r);
        if ( l == r ){
            same[l-1]++;
        } else {
            list[l-1]++;
            if ( r < N ){
                list[r]--;
            }
        }
    }
    for ( i = 0; i < N; i++ ){
        n += list[i];
        //fprintf(stderr, "%d %d %d\n", list[i], n, same[i]);
        printf("%d", (n+same[i])%2);
    }
    printf("\n");
    return 0;
} 