#include<stdio.h>
int main(void)
{
    char s[100000];
    scanf("%s", s);

    int i, one = 0, zero = 0;
    for (i = 0; s[i] != '\0'; i++) {
        if (s[i] == '1')
            one++;
        else if (s[i] == '0')
            zero++;
    }

    //const int min = one > zero ? zero : one;
    int min;
    if (one > zero)
        min = zero;
    else
        min = one;

    printf("%d", min * 2);
    return 0;
} 