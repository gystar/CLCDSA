#include<stdio.h>

int main(void){
    int r;
    scanf("%d\n",&r);
    if (r<1200){
        printf("ABC\n");
    }
    else{
        if(r<2800){
            printf("ARC\n");
        }
        else{
            printf("AGC\n");
        }
    }
} 