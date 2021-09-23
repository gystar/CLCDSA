#include<stdio.h>
int main()
{
    char s[111];
    unsigned long long int k;
    scanf("%s", s);
    scanf("%lld", &k);
    unsigned long long int i;
    for (i = 0; i < k; i++)
    {
        if (s[i] != '1')
        {
            printf("%c\n", s[i]);
            return 0;
        }
    }
    printf("1\n");
    return 0;
} 