#include <stdio.h>
int main(void){
    int h,w;
    scanf("%d%d",&h,&w);
    printf("%d\n",(w-1)*h+(h-1)*w);
    return 0;
} 