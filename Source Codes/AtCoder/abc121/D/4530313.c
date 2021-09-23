#include<stdio.h>
#include<math.h>
int main()
{
    unsigned long long int a, b;
    scanf("%lld %lld", &a, &b);
    a--;
    if (a % 4 == 1)a = 1;
    else if (a % 4 == 2)a = a + 1;
    else if (a % 4 == 3)a = 0;
    if (b % 4 == 1)b = 1;
    else if (b % 4 == 2)b = b + 1;
    else if (b % 4 == 3)b = 0;
    printf("%lld\n", a^b);
    return 0;
} 