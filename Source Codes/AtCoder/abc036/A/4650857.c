#include <stdio.h>
int main(void){
    int a,b;
    scanf("%d%d",&a,&b);
    printf("%d\n",b/a+(b%a!=0));
    return 0;
} 