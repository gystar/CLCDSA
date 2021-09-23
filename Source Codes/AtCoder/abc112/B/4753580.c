#include <stdio.h>
int main(void){
    int n,T,c,t,cmin=1001,i;
    scanf("%d%d",&n,&T);
    for(i=0;i<n;i++){
        scanf("%d%d",&c,&t);
        if(t<=T && c<cmin) cmin=c;
    }
    if(cmin==1001) printf("TLE\n");
    else printf("%d\n",cmin);
    return 0;
} 