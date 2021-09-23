#include <stdio.h>
int main(void){
    int N, M;
    scanf("%d %d", &N, &M);
    int K;
    int food[30] = {0};
    for(int i = 0; i < N; i++){
        scanf("%d", &K);
        int A;
        for(int j = 0; j < K; j++){
            scanf("%d", &A);
            food[A-1] += 1;
        }
    }
    int ans = 0;
    for(int i = 0; i < M; i++){
        if(food[i] == N){
            ans += 1;
        }
    }
    printf("%d\n", ans);
    return 0; 
} 