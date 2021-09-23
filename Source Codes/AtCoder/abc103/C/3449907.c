#include <stdio.h>

int main()
{   long long i,n,j,a[30001],hoge,ans=0;
    scanf("%lld",&n);
        for(i=0;i<n;i++){
       scanf("%lld",&a[i]);
       ans+=(a[i]-1);
    }
    printf("%lld",ans);
    return 0;
} 