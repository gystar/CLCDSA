#include <stdio.h>
int main(void){
    printf("Christmas");
    int D = 0;
    scanf("%d", &D);
    D = 25 - D;
    for (int i = 0; i < D; i++){
        printf(" Eve");
    }
    return 0; 
} 