#include<stdio.h>
int main()
{
    int n, four, two, other, i, x;
    four = 0;
    two = 0;
    other = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &x);
        if(x % 4 == 0)four++;
        else if(x % 2 == 0)two++;
        else other++;
    }
    two = two > 0 ? 1 : 0;
    if(other + two <= four + 1)printf("Yes");
    else printf("No");
    return 0;
} 