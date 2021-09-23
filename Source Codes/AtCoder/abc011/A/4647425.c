#include<stdio.h>
int main(void){
    int n;
    scanf("%d",&n);
    n++;
    if(n > 12)n = 1;
    printf("%d\n",n);
    return 0;
} 