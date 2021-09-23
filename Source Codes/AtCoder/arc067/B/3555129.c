#include <stdio.h>
int main(void){
    long long n,a,b,ans=0;
    scanf("%lld%lld%lld",&n,&a,&b);
    long long x[n];
    for (int i=0; i<n; i++){
        scanf("%lld",&x[i]);
    }
    for (int i=0; i<n-1; i++){
        if ((x[i+1]-x[i])*a<b){
            ans+=(x[i+1]-x[i])*a;
        } else {
            ans+=b;
        }
    }
    printf("%lld\n",ans);
    return 0;
} 