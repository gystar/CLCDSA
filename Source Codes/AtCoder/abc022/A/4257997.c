#include <stdio.h>
int main(void){
    int N = 0; int S = 0; int T = 0;
    int W = 0;
    scanf("%ld %ld %ld", &N, &S, &T);
    scanf("%ld", &W);
    int A[10000] = {0};
    for(int i = 2; i <= N; i++){
        scanf("%ld", &A[i]);
    }
    int day = 0;
    if(W >= S && W <=T){
        day++;
    }
    for(int i = 2; i <= N; i++){
        W += A[i];
        if(W >= S && W <= T){
            day++;
        }
    }
    printf("%d\n", day);
    return 0;
} 