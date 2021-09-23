#include <stdio.h>
int main()
{   int n;
    scanf("%d",&n);
    int a[n+1];
    a[n]=0;
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    long long ans=0,sum=0;
    for(int i=0;i<=n;i++){
        if(a[i]==0){
            ans+=sum/2;
            sum=0;
        }else{
            sum+=a[i];
        }
    }
    printf("%lld",ans);
    return 0;
} 