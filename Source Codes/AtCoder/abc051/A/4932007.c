#include <stdio.h>
int main(void)
{
    char a[20];
    int i;
    scanf("%s", a);
    for(i=0; i<5; i++) printf("%c", a[i]);
    printf(" ");
    for(i=6; i<13; i++) printf("%c", a[i]);
    printf(" ");
    for(i=14; i<19; i++) printf("%c", a[i]);
    return 0;
} 