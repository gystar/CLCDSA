#include <stdio.h>
#include <math.h>
int main(void){
    int n,t,a,h[1000],i,ibest;
    double hmax=__INT_MAX__;
    scanf("%d%d%d",&n,&t,&a);
    for(i=0;i<n;i++){
        scanf("%d",&h[i]);
        if(fabs((t-h[i]*0.006)-a)<hmax){
            ibest=i;
            hmax=fabs((t-h[i]*0.006)-a);
        }
    }
    printf("%d\n",ibest+1);
    return 0;
} 