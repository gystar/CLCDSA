#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int center = 0;
    if(a>=b&&a<=c || a<=b&&a>=c)center = a;
    else if(b>=a&&b<=c || b<=a&&b>=c)center = b;
    else center = c;
    printf("%d\n",center);
    return 0;
} 