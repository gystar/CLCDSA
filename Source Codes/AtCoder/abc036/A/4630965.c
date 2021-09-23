#include <stdio.h>
int main(void){
    // Your code here!
    int a,b;
    scanf("%d%d",&a,&b);
    printf("%d\n",b/a+(b%a!=0));
} 