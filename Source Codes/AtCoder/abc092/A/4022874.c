#include <stdio.h>
int main(void){
    int a,b,c,d,min=3000;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if(a+c<=min) min=a+c;
    if(a+d<=min) min=a+d;
    if(b+c<=min) min=b+c;
    if(b+d<=min) min=b+d;
    printf("%d",min);
    return 0;
} 