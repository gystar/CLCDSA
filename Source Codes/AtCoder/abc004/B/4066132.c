#include <stdio.h>

int main(void)
{
    char c[4][4];

    for (int i = 0; i < 4; i++)
    {
        scanf("%c %c %c %c\n", &c[i][0], &c[i][1], &c[i][2], &c[i][3]);
    }

    for (int i = 3; i >= 0; i--)
    {
        printf("%c %c %c %c\n", c[i][3], c[i][2], c[i][1], c[i][0]);
    }

    return 0;
} 