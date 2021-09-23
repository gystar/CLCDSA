#include <stdio.h>

int main(){
    int N;
    scanf("%d", &N);
    int A[N];
    for(int i = 0; i < N; i++){
        scanf("%d", &A[i]);
    }
    int ecnt = N, cnt = 0;
    while(ecnt == N){
        ecnt = 0;
        for(int i = 0; i < N; i++){
            if(A[i]%2 == 0){
                A[i] /= 2;
                ecnt++;
            }
        }
        cnt++;
    }
    printf("%d", cnt - 1);
    return 0;
} 