#include <stdio.h>
int main(void){
    int h,m;
    scanf("%d%d",&h,&m);
    printf("%d\n",(18-h-1)*60+(60-m));
    return 0;
} 