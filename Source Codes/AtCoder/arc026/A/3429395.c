#include <stdio.h>
int main(void){
    int n,a,b;
    scanf("%d%d%d",&n,&a,&b);
    if (n<5){
        printf("%d\n",b*n);
    } else {
        printf("%d\n",a*n-(a-b)*5);
    }
    return 0;
} 