#include <stdio.h>

int main(){
    int A, B, C, X, cnt = 0;
    scanf("%d%d%d%d", &A, &B, &C, &X);
    for(int i = 0; i < A+1; i++){
        for(int j = 0; j < B+1; j++){
            for(int k = 0; k < C+1; k++){
                if(500*i + 100*j + 50*k == X) cnt++;
            }
        }
    }
    printf("%d", cnt);
    return 0;
} 