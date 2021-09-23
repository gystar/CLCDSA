#include <stdio.h>

int main(void)
{
    int a,b,c,ans;
    scanf("%d%d%d", &a,&b,&c);

    if(a==b&&b==c) ans=1;
    else if(a!=b&&b!=c&&c!=a) ans=3;
    else ans=2;

    printf("%d", ans);
    return 0;
} 