#include <stdio.h>
int main(void){
    int a,b,i;
    scanf("%d%d",&a,&b);
    for(i=0;i<b;i++){
        if((a+i)%b==0) break;
    }
    printf("%d\n",i);
    return 0;
} 