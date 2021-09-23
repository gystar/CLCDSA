#include <stdio.h>

int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int ans=a*b*2+b*c*2+a*c*2;
    printf("%d\n",ans);
} 