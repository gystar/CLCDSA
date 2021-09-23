#include <stdio.h>
int main(void){
    int N = 0; int T = 0;
    int A[100000] = {0};
    scanf("%ld %ld", &N, &T);
    for(int i = 0; i < N; i++){
        scanf("%ld", &A[i]);
    }
    int open = 0; int t = 0;
    for(int i = 0; i < N-1; i++){
        t = A[i] + T;
        if(t <= A[i+1]){
            open += T;
        }else {
            open += (A[i+1] - A[i]);
        }
    }
    printf("%d\n", open + T);
    return 0;
} 