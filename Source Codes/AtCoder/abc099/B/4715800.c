#include <stdio.h>
int main(void){
    int a,b,n=0,i;
    scanf("%d%d",&a,&b);
    for(i=1;i<b-a;i++){
        n+=i;
    }
    printf("%d\n",n-a);
    return 0;
} 