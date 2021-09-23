#include <stdio.h>
int main(void){
    int n,k,t[3],i;
    scanf("%d%d",&n,&k);
    scanf("%d%d",&t[0],&t[1]);
    for(i=0;i<n-2;i++){
        scanf("%d",&t[2]);
        if(t[0]+t[1]+t[2]<k){
            printf("%d\n",i+3);
            return 0;
        }
        t[0]=t[1];
        t[1]=t[2];
    }
    printf("-1\n");
    return 0;
} 