#include <stdio.h>
int main(void){
    int a,b,c,x,ans=0;
    scanf("%d%d%d%d",&a,&b,&c,&x);
    for(int i=0;i<=a;i++){
        for(int j=0;j<=b;j++){
            for(int k=0;k<=c;k++){
                int tmp=i*500+j*100+k*50;
                if(tmp==x) ans++;
            }
        }
    }
    printf("%d\n", ans);
    return 0;
} 