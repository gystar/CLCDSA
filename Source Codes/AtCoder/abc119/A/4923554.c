#include<stdio.h>
#include<string.h>
        int main(void)
{
        char Y[11];
        scanf("%s", Y);
        if (strcmp(Y,"2019/04/30")<=0)
         printf("Heisei");
        else
         printf("TBD");
        return 0;
} 