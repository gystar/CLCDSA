#include<stdio.h>
#include<string.h>

int main(void)
{
    char c[11];

    scanf("%s",c);
    if  (strcmp(c,"2019/04/30")<=0)
         printf("Heisei\n");
    else printf("TBD\n");

    return 0;
} 