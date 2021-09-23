#include <stdio.h>

int main(void){
    int N, M;
    scanf("%d %d", &N, &M);
    int a[M], b[M];
    for(int i=0; i<M; i++){
        scanf("%d %d", &a[i], &b[i]);
    }
    //FR
    int C[N+1];
    for(int i=1; i<=N; i++){
        C[i] = 0;
    }
    for(int i=0; i<M; i++){
        C[a[i]]++;
        C[b[i]]++;
    }
    for(int i=1; i<=N; i++){
        if(C[i]%2 == 1){
            printf("NO\n");
            return 0;
        }
    }
    printf("YES\n");
    return 0;
} 