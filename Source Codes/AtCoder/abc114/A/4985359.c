#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    printf((a == 3 || a == 5 || a == 7) ? "YES" : "NO");
    return 0;
} 