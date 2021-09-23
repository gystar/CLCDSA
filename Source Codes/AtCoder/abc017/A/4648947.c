#include <stdio.h>
int main(void){
    int s,e,v=0,i;
    for(i=0;i<3;i++){
        scanf("%d%d",&s,&e);
        v+=s*e/10;
    }
    printf("%d\n",v);
    return 0;
} 