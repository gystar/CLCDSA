#include <stdio.h>
int main(void){
    int a,b,c,d;
    double ta,ao;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    ta=(double)b/a;
    ao=(double)d/c;
    printf("%s\n",ta>ao?"TAKAHASHI":(ta<ao?"AOKI":"DRAW"));
    return 0;
} 