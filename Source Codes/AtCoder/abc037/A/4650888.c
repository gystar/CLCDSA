#include <stdio.h>
int main(void){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    printf("%d\n",a<b?c/a:c/b);
    return 0;
} 