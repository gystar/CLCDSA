#include <stdio.h>

int main()
{
    int n=0;
    scanf("%d",&n);
    int m=n/10;
    int k=n%10;
    int ans=0;
    if (k<=6)
        ans=m*100+k*15;
    else
        ans=m*100+100;
    printf("%d",ans);
    return 0;
} 