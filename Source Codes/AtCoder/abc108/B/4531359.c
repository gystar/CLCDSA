#include <stdio.h>

int main(){
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    /* 0 1
     * -1 0
     */
    int x=a-c,y=b-d;
    int e,f,g,h;
    e=c+y;f=d-x;
    g=e+x;h=f+y;
    printf("%d %d %d %d",e,f,g,h);
    return 0;
} 