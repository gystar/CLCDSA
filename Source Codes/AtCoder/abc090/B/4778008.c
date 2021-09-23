#include <stdio.h>
int main(void){
    int a,b,i,ans=0;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++){
        if((i%10000)/1000==(i%100)/10 && i/10000==i%10) ans++;
    }
    printf("%d\n",ans);
    return 0;
} 