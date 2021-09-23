#include <stdio.h>

int
main(int argc, char *argv[])
{
    char b;

    scanf("%c", &b);

    if (b == 'A' || b == 'T') {
        printf("%c\n", b == 'A' ? 'T' : 'A');
    } else {
        printf("%c\n", b == 'C' ? 'G' : 'C');
    }

    return 0;
} 