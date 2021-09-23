#include <stdio.h>
int main(void){
    int a,b;
    char s[2];
    scanf("%d%s%d",&a,s,&b);
    printf("%d\n",s[0]=='+'?a+b:a-b);
    return 0;
} 