#include <stdio.h>

int main(void)
{
    int n, t, min;

    scanf("%d", &n);
    scanf("%d", &min);

    for (int i = 1; i < n; i++)
    {
        scanf("%d", &t);

        if (t < min)
        {
            min = t;
        }
    }

    printf("%d\n", min);

    return 0;
} 