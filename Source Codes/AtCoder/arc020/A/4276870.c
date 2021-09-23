#include<stdio.h>
#include<math.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    a = abs(a);
    b = abs(b);
    if (a < b)
        printf("Ant\n");
    else if (a > b)
        printf("Bug\n");
    else
        printf("Draw\n");
    return 0;
} 