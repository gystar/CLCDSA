#include<stdio.h>
#include<math.h>
int main()
{
    int n, a, b;
    scanf("%d %d %d", &n, &a, &b);
    if (abs(a - b) % 2 == 0)
        printf("Alice\n");
    else
        printf("Borys\n");
    return 0;
} 