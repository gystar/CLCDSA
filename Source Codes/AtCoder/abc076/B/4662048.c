#include <stdio.h>
int main(void){
    int i,n,k,p=1;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++){
        p=(p*2<p+k?p*2:p+k);
    }
    printf("%d\n",p);
    return 0;
} 