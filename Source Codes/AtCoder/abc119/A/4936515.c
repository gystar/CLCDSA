#include <stdio.h>
#include <string.h>

int main()
{
    char a[100];
    scanf("%s",a);
    
    if (strcmp(a,"2019/04/30")<=0)
        printf("Heisei\n");
    else
        printf("TBD\n");
    
    return 0;
} 