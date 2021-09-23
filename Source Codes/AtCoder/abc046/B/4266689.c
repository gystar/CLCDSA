#include <stdio.h>
int main()
{   int n,k;
    scanf("%d%d",&n,&k);
    long long ans=1;
    for(int i=0;i<n;i++){
        if(i==0){
            ans*=k;
        }else{
            ans*=(k-1);
        }
    }
    printf("%lld",ans);
    return 0;
} 