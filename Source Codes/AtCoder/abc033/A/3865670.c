#include<stdio.h>
int main(void)
{
    int N;
    scanf("%d \n",&N);
    if(N%1111==0){
        printf("SAME\n");
        return 0;
    }
    printf("DIFFERENT\n");
    return 0;
} 