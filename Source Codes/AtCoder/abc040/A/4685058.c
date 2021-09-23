#include <stdio.h>
int main(){
    int a,x;
    scanf("%d%d",&a,&x);
    if(a/2 < x)printf("%d\n",a-x);
    else printf("%d\n",x-1);
} 