#include <stdio.h>
int main(void){
    long long int a,k;
    long long int m=2000000000000;
    long long int  ans=0;
    scanf("%lld %lld",&a,&k);
    if(k==0){
        ans=m-a;
        printf("%lld\n",ans);
        return 0;
    }
    while(a<m){
        a+=1+a*k;
        ans++;
    }
        printf("%lld\n",ans);
    return 0;
} 