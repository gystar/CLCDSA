#include<stdio.h>
int main()
{
    int h, w;
    scanf("%d %d", &h, &w);
    char a[10][10];
    int i, j;
    for (i = 0; i < h; i++)
        scanf("%s", a[i]);
    int x, y;
    x = y = 0;
    while (x < h && y < w)
    {
        if (x == h - 1 && y == w - 1)
        {
            if (a[x - 1][y] == '#' && a[x][y - 1] == '#')
            {
                printf("Impossible\n");
                return 0;
            }
            else
                break;
        }
        if (x == h - 1)
        {
            if (a[x][y + 1] == '#')
            {
                if (y > 0)
                {
                    if (a[x][y - 1] == '#' && a[x - 1][y] == '#')
                    {
                        printf("Impossible\n");
                        return 0;
                    }
                }
                y++;
                continue;
            }
            else
            {
                printf("Impossible\n");
                return 0;
            }
        }
        if (y == w - 1)
        {
            if (a[x + 1][y] == '#')
            {
                if (x > 0)
                {
                    if (a[x - 1][y] == '#' && a[x][y - 1] == '#')
                    {
                        printf("Impossible\n");
                        return 0;
                    }
                }
                x++;
                continue;
            }
            else
            {
                printf("Impossible\n");
                return 0;
            }
        }
        if (a[x][y + 1] == '#' && a[x + 1][y] == '#')
        {
            printf("Impossible\n");
            return 0;
        }
        if (a[x][y + 1] == '#')
        {
            y++;
            continue;
        }
        if (a[x + 1][y] == '#')
        {
            x++;
            continue;
        }
    }
    printf("Possible\n");
    return 0;
} 