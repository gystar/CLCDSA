#include <stdio.h>
#include<stdlib.h>
int main(void){
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    if(10-abs(a-b)>abs(a-b)) printf("%d\n",abs(b-a));
    else printf("%d\n",10-abs(a-b));
    return 0;
} 