#include <stdio.h>
int main(void){
    int a,b,c,color=3;
    scanf("%d%d%d",&a,&b,&c);
    if(a==b) color--;
    if(b==c) color--;
    else if(a==c) color--;
    printf("%d\n",color);
    return 0;
} 