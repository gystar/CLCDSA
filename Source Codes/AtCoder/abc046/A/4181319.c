#include<stdio.h>

int main(){

    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);

    int ans = 3;

    if(a==b)ans--;
    if(b==c)ans--;
    if(ans>1 && a==c)ans--;

    printf("%d\n",ans);

    return 0;
} 