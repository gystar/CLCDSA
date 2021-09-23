#include <stdio.h>

int main(void){
    int N,A,B;
    scanf("%d",&N);
    if (N==1){
        printf("Hello World");
    } else {
        scanf("%d",&A);
        scanf("%d",&B);
        printf("%d",A+B);
    }

    return 0;
} 