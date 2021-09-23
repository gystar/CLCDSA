#include <stdio.h>
int main(void){
    int a,b,c,k,s,t;
    scanf("%d%d%d%d%d%d",&a,&b,&c,&k,&s,&t);
    printf("%d\n",s+t>=k?(a-c)*s+(b-c)*t:a*s+b*t);
    return 0;
} 