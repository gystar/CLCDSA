#include<stdio.h>

int main(){
    int a,b,c;
    int sa;

    scanf("%d",&a);
    scanf("%d",&b);

    if(a==b){
        printf("0\n");
    }else{
        c = a / b;
        sa = b*(c+1)-a;
        printf("%d\n",sa);
    }
    return 0;
} 