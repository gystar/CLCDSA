#include <stdio.h>
int main(void){
    int x,a,b;
    scanf("%d%d%d",&x,&a,&b);
    x-=a;
    int bs=(x/b)*b;
    printf("%d",x-bs);
    return 0;
} 