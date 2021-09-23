#include <stdio.h>
int main(void)
{
    int  N, C, s, t, c;
    int  i, j, sum, max, v[30][100000]={{0}};
    
    scanf("%d %d", &N, &C);
    for(i = 0; i < N; i++){
        scanf("%d %d %d", &s, &t, &c);
        for(j = s-1; j < t; j++){
            v[c-1][j] = 1;
        }
    }
    max = 0;
    for(j = 1; j < 100000; j++){
        sum = 0;
        for(i = 0; i < C; i++){
            if(v[i][j] > 0){
                sum++;
            }
        }
        if(sum > max){
            max = sum;
        }
    }
    printf("%d\n", max);
    
    return 0;
} 