#include<stdio.h>
int main()
{
    int sx, sy, tx, ty;
    scanf("%d %d %d %d", &sx, &sy, &tx, &ty);
    int i;
    int dx, dy;
    dx = tx - sx;
    dy = ty - sy;
    for (i = 0; i < dx; i++)
        printf("R");
    for (i = 0; i < dy; i++)
        printf("U");
    for (i = 0; i < dx; i++)
        printf("L");
    for (i = 0; i < dy + 1; i++)
        printf("D");
    for (i = 0; i < dx + 1; i++)
        printf("R");
    for (i = 0; i < dy + 1; i++)
        printf("U");
    printf("LU");
    for (i = 0; i < dx + 1; i++)
        printf("L");
    for (i = 0; i < dy + 1; i++)
        printf("D");
    printf("R\n");
    return 0;
} 