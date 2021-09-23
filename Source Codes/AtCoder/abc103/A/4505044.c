#include <stdio.h>

int main(){
    int a,b,c,ans;
    scanf("%d %d %d",&a,&b,&c);
    if(a>b) a+=b,b=a-b,a-=b;
    if(c<a) ans=abs(b-a)+abs(a-c);
    else if(c>b) ans=abs(c-b)+abs(b-a);
    else ans=abs(b-c)+abs(c-a);
    printf("%d",ans);
    return 0;
} 