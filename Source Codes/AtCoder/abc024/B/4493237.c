#include <stdlib.h>
#include <stdio.h>

int main()
{   int n,t;
    scanf("%d%d",&n,&t);
    long long ans=0;
    int a[n+1];
    a[n]=114515810;
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        if(a[i+1]>=a[i]+t){
            ans+=t;
        }
        else{
            ans+=a[i+1]-a[i];
        }
    }
    printf("%lld\n",ans);
    
    return 0;
} 