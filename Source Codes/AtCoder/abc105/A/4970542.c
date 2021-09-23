# include <stdio.h>

int main(){
    int N, K;

    scanf("%d%d", &N, &K);

    int dif = 0;
    if (N % K)
        dif = 1;

    printf("%d", dif);

    return 0;
} 