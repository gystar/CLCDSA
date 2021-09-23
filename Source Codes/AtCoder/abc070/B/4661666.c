#include <stdio.h>
int main(void){
    int a,b,c,d;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    printf("%d\n",(a>=d || b<=c)?0:(a>c?(b-a>d-a?d-a:b-a):(b-c>d-c?d-c:b-c)));
    return 0;
} 