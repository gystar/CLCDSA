#include <stdio.h>

int main(void){
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    if(a%b!=0)  printf("%d\n",b-a%b);
    else        printf("%d\n",0);
    return 0;
} 