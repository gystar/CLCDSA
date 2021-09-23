#include <stdio.h>
int main(void)
{
    int a, b, n;
    scanf("%d", &n);
    if(n==1){
        printf("Hello World\n");
    }
    else{
        scanf("%d%d", &a, &b);
        printf("%d\n", a+b);
    }
    return 0;
} 