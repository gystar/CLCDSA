#include <stdio.h>

int main(void){
    int N;
    scanf("%d", &N);
    if(N == 1)printf("%s\n", "Hello World");
    if(N == 2){
        int A, B;
        scanf("%d\n%d", &A, &B);
        printf("%d\n", A+B);
    }
    return 0; 
} 