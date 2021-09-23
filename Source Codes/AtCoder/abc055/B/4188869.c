#include <stdio.h>
int main(void){
    long int n,i,ans=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        ans*=i;
        if(1000000007<=ans) ans=ans%1000000007;
    }
    printf("%ld",ans);
    return 0;
} 