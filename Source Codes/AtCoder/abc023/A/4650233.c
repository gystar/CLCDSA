#include<stdio.h>
int main(){
    int x,ans = 0;
    scanf("%d",&x);
    ans = x/10 + x%10;
    printf("%d\n",ans);
    return 0;
} 