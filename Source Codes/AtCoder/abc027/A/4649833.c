#include <stdio.h>
int main(void){
    int l1,l2,l3;
    scanf("%d%d%d",&l1,&l2,&l3);
    printf("%d\n",l1==l2?l3:(l2==l3?l1:l2));
    return 0;
} 