#include <stdio.h>
  
int main(){
    int d,n;
    int ans=1;
    scanf("%d %d",&d,&n);
    for(int i=0;i<d;i++){
        ans*=100;
    }
    if(n<100) ans*=n;
    else ans*=101;
    printf("%d",ans);
    return 0;
} 