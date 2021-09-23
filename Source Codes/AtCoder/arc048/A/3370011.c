#include <stdio.h>
int main(void){
    int a,b,ans;
    scanf("%d%d",&a,&b);
    ans=b-a;
    if (a<0 && b>0){
        ans--;
    }
    printf("%d\n",ans);
    return 0;
} 