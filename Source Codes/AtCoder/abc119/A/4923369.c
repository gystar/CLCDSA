#include <stdio.h>
#include <string.h>

int main(void)
{
    char date[11];

    scanf("%s", date);

    if (strcmp(date, "2019/04/30")<=0)
        printf("Heisei\n");
    else
        printf("TBD\n");

    return 0;
} 