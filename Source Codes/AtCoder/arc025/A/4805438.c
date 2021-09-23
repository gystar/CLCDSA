#include <stdio.h>
#define max(a,b) a>b?a:b
int main(void){
    int d[7],j[7],i,sum=0;
    for(i=0;i<7;i++){
        scanf("%d",&d[i]);
    }
    for(i=0;i<7;i++){
        scanf("%d",&j[i]);
    }
    for(i=0;i<7;i++){
        sum+=max(d[i],j[i]);
    }
    printf("%d\n",sum);
    return 0;
} 