#include <stdio.h>
int main(void){
    int n;
    scanf("%d",&n);
    printf("%d\n",n%10<7?100*(n/10)+15*(n%10):100*(n/10+1));
    return 0;
} 