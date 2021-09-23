#include <stdio.h>
int main(void){
    int a,b,n,ans=0;
    scanf("%d",&n);
    for (int i=0; i<n; i++){
        scanf("%d%d",&a,&b);
        ans+=a*b;
    }
    ans=ans*1.05;
    printf("%d\n",ans);
    return 0;
} 