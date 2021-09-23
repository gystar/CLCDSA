#include<stdio.h>
int main(void)
{
    int a,b,n;
    scanf("%d \n",&a);
    scanf("%d \n",&b);
    scanf("%d \n",&n);
    LABEL1:
    if(n%a==0 && n%b==0){
        printf("%d\n",n);
        return 0;
    }
    n=n+1;
    goto LABEL1;
    return 0;
} 