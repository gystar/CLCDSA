#include <stdio.h>

int main(void)
{
    int length;
    int questions;
    char str[100001];
    int s[100000];
    int e[100000];
    int results[100000] = {0};

    scanf("%d %d", &length, &questions);
    scanf("%s", &str);
    
    for(int i = 0 ; i < questions ; i++)
    {
        scanf("%d %d", &s[i], &e[i]);
    }
    for(int i = 1; i < length ; i++)
    {
        if( str[i - 1] == 'A' && str[i] == 'C')
        {
            results[i]++;
        }
        results[i] = results[i] + results[i - 1];
    }
    for(int i = 0 ; i < questions ; i++)
    {
        printf("%d\n", results[e[i] - 1] - results[s[i] - 1]);
    }

    return 0;
} 