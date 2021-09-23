#include <stdio.h>

int main(){
    int n,ans;
    scanf("%d",&n);
    if(n%2==0){
        ans=n;
    }else{
        ans=2*n;
    }   
    printf("%d",ans);
    return 0;
} 