#include <stdio.h>
int main(void){
    int n,k,x,d=0,i;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++){
        scanf("%d",&x);
        d+=2*(x<k-x?x:k-x);
    }
    printf("%d\n",d);
    return 0;
} 