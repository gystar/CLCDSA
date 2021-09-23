#include <stdio.h>
#include <stdlib.h>
int main(void){
    int a,b;
    scanf("%d%d",&a,&b);
    printf("%s\n",abs(a)<abs(b)?"Ant":(abs(a)>abs(b)?"Bug":"Draw"));
    return 0;
} 