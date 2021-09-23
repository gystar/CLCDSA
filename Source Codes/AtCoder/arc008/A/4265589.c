#include <stdio.h>

int main()
{   int n;
    scanf("%d",&n);
    int ans=0;
    ans+=(n/10)*100;
    n%=10;
    if(n>6)ans+=100;
    else ans+=n*15;
    printf("%d\n",ans);

    return 0;
} 