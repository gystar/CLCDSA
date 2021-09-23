#include <stdio.h>

int main(void){
    int N, M, X;
    scanf("%d%d%d", &N, &M, &X);
    int a[M];
    int c1 = 0;
    int c2 = 0;
    for(int i = 0; i < M; i++){
        scanf("%d", &a[i]);
        if(a[i] < X) c1 += 1;
        else if(a[i] > X) c2 += 1;
    }
    printf("%d\n", c1 < c2 ? c1 : c2);
    return 0; 
} 