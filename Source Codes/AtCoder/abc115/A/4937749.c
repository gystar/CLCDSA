#include<stdio.h>
int main(void)
{
    int a, b, i;
    
    scanf("%d", &a);
    
    b = 25 - a;

    if(b == 0){
        printf("Christmas\n");
    }else{
        printf("Christmas ");
        for(i = 0; i <= b - 1; i++){
            printf("Eve ");
        }
        printf("\n");
    }
    return 0;
} 