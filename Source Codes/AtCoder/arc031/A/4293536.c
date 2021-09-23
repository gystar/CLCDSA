#include<stdio.h>
#include<string.h>
int main()
{
    char name[102];
    scanf("%s", name);
    int n = strlen(name);
    int i;
    for (i = 0; i < n / 2; i++)
    {
        if (name[i] != name[n - i - 1])
        {
            printf("NO\n");
            return 0;
        }
    }
    printf("YES\n");
    return 0;
} 