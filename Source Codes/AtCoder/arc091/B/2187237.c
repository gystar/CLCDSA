#include <stdio.h>



int main(void){
    long long int N,K;
    scanf("%lld %lld",&N,&K);
    long long int ans=0;
    if(K!=0){
    for(int i=K+1;i<=N;i++){
        int po=(N+1)%i;
        if(po>=K)ans+=po-K;
        int buri=(N+1)/i;
        ans+=buri*(i-K);
        //printf("%lld\n",ans);
    }
    printf("%lld",ans);
    }
    else {
        ans=N*N;
        printf("%lld",ans);
    }
    return 0;
} 