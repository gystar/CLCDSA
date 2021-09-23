#include<stdio.h>
int main()
{
    char s;
    scanf("%c", &s);
    if (s == 'L')printf("<");
    else if (s == 'R')printf(">");
    else if (s == 'A')printf("A");
    scanf("%c", &s);
    while (s != '\n')
    {
        if (s == 'L')printf(" <");
        else if (s == 'R')printf(" >");
        else if (s == 'A')printf(" A");
        scanf("%c", &s);
    }
    printf("\n");
    return 0;
} 