#include <stdio.h>
int main(void){
    int a,b,ans;
    scanf("%d%d",&a,&b);
    ans=a-b;
    ans=fmax(ans,900+a%100-b);
    ans=fmax(ans,a/100*100+90+a%10-b);
    ans=fmax(ans,a/10*10+9-b);
    ans=fmax(ans,a-100-b%100);
    ans=fmax(ans,a-b/100*100-b%10);
    ans=fmax(ans,a-b/10*10);
    printf("%d\n",ans);
    return 0;
} 