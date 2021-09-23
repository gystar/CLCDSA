#include <stdio.h>

int main()
{
    char a[1];
    
    scanf("%s",a);
    
    if (a[0] == 'A') printf("T\n");
    if (a[0] == 'T') printf("A\n");
    if (a[0] == 'G') printf("C\n");
    if (a[0] == 'C') printf("G\n");
    
    return 0;
    
} 