#include <stdio.h>
int main(void){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    printf("%d\n",2*(a*b+b*c+c*a));
    return 0;
} 