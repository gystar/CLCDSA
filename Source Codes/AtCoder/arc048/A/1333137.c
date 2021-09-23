#include <stdio.h>

int main(void){
    int a,b;
    scanf("%d %d",&a,&b);
    if(a<0 && b>0){
        a += 1;
    }
    printf("%d\n",b-a);
    return 0;
} 