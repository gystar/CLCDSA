#include <stdio.h>
#include <math.h>
int main(void){
    int x,i,j,ans=0;
    scanf("%d",&x);
    for(i=1;i<32;i++){
        for(j=2;j<10;j++){
            if(pow(i,j)<=x && pow(i,j)>=ans) ans=(int)pow(i,j);
        }
    }
    printf("%d\n",ans);
    return 0;
} 