#include <stdio.h>
int main(void){
    long long int A,K;
    scanf("%lld %lld",&A,&K);
    long long int ans=0;
    if(K==0)ans=2000000000000-A;
    if(K!=0)while(1){
        ans++;
        A+=1+A*K;
        if(A>=2000000000000)break;
    }
    printf("%lld",ans);
    return 0;
} 