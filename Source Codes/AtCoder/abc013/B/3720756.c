#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a, b;
    
    scanf("%d%*c", &a);
    scanf("%d%*c", &b);
    if(abs(a - b) <= 5){
        printf("%d\n", abs(a - b));
    }else{
        printf("%d\n", 10 - abs(a - b));
    }
    
    return 0;
} 