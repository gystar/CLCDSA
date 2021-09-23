#include <stdio.h>
int main(void){
    int a,d;
    scanf("%d%d",&a,&d);
    printf("%d\n",(a+1)*d>a*(d+1)?(a+1)*d:a*(d+1));
    return 0;
} 