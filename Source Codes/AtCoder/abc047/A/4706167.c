#include <stdio.h>
int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a-(b+c)==0 || b-(a+c)==0 || c-(a+b)==0)printf("Yes\n");
    else printf("No\n");
} 