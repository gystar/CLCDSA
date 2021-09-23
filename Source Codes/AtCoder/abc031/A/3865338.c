#include<stdio.h>
int main(void)
{
    int A,D,x1,x2;
    scanf("%d",&A);
    scanf("%d",&D);
    x1=(A+1)*D;
    x2=A*(D+1);
    if(x1>=x2){
        printf("%d\n",x1);
    }
    if(x2>x1){
        printf("%d\n",x2);
    }
    return 0;
} 