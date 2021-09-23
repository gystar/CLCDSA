#include <stdio.h>
int main(void){
    int n,x;
    scanf("%d%d",&n,&x);
    printf("%d\n",x-1<n-x?x-1:n-x);
    return 0;
} 