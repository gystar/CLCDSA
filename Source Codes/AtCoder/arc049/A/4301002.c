#include<stdio.h>
#include<string.h>
int main()
{
    char s[102];
    scanf("%s", s);
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int n = strlen(s);
    s[n] = '\n';
    for (int i = 0; i <= n; i++)
    {
        if (i == a || i == b || i == c || i == d)
            printf("\"");
        printf("%c", s[i]);
    }
    return 0;
} 