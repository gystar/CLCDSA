#include <stdio.h>
#include <string.h>
int main(void)
{
    int a,b;
    char op;
    scanf("%d %c %d", &a, &op, &b);
    if(strncmp(&op, "+", 1)==0) printf("%d", a+b);
    else printf("%d", a-b);
    return 0;
} 