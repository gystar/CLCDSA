#include <stdio.h>
int main(void){
    int n,m,sum=0,i;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&m);
        if(m<80) sum+=80-m;
    }
    printf("%d\n",sum);
    return 0;
} 