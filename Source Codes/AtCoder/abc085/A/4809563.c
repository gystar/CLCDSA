#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    char s[11] = {0};
    scanf("%s", s);
    s[3] = '8';
    printf("%s\n", s);
    return 0;
} 