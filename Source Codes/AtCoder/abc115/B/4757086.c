#include <stdio.h>
int main(void){
    int n,i,p,max=0,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&p);
        sum+=p;
        if(p>max) max=p;
    }
    printf("%d\n",sum-max/2);
    return 0;
} 