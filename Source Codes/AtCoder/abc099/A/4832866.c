#include <stdio.h>

int main(void)
{
    int i;
    scanf("%d",&i);

    if(1<=i&&i<=999){
        printf("ABC\n");
    }else if(1000<=i&&i<=1998){
        printf("ABD\n");
    }

    return 0;
} 