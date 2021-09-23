#include <stdio.h>

int main()
{   int n,k,x,y;
    scanf("%d%d%d%d",&n,&k,&x,&y);
    long long ans=0;
    for(int i=0;i<n;i++){
        if(i<k)ans+=x;
        else ans+=y;
    }
    printf("%lld",ans);

    return 0;
} 