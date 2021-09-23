#include<stdio.h>

int main(){
    int A,B,C;
    scanf("%d",&A);
    scanf("%d",&B);
    scanf("%d",&C);

    if(C<=A+B+1){
        printf("%d",B+C);
    }

    else{
        printf("%d",A+2*B+1);
    }
    return 0;
} 