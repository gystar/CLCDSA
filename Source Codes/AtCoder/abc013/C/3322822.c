#include <stdio.h>
long long llmax(long long a, long long b){return a>b?a:b;}
int main(void){
    long long n,h,a,b,c,d,e,ans=9e18;
    scanf("%lld%lld%lld%lld%lld%lld%lld",&n,&h,&a,&b,&c,&d,&e);
    long long p=(n*e-h+(b+e))/(b+e);
    if (h>n*e){
        ans=0;
    }
    for (long long i=0; i<=p; i++){
        long long k=llmax(i, (n*e-h-(b-d)*i+(d+e))/(d+e));
        long long tmp=(k-i)*c+i*a;
        if (tmp<ans && i<=k){
            ans=tmp;
        }
    }
    printf("%lld\n",ans);
    return 0;
} 