#include <stdio.h>
int main(void){
    int n,m,N,ans=0,s=0;
    scanf("%d%d%d",&m,&n,&N);
    while(N!=0){
        ans+=N;
        s+=N;
        N=s/m*n;
        s=s%m;
    }
    printf("%d\n",ans);
    return 0;
} 