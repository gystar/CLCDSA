#include <stdio.h>

int n,tmp,ans=10000 ;

int main(void){
    
    int i;
    int j;
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        int sum=0;
        j=n-i;
         tmp=i;
        while(tmp){
            sum+=tmp%6;
            tmp/=6;
        }
        tmp=j;
        while(tmp){
            sum+=tmp%9;
            tmp/=9;
        }
        if(ans>sum)
            ans=sum;
            
    }
    printf("%d",ans);
} 