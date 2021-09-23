#include <stdio.h>

int main(int argc, char* argv[])
{
    int n = 0;
    scanf("%d", &n);

    int roundTripNum = n / 2;
    if (n % 2 != 0)
    {
        roundTripNum++;
    }

    printf("%d\n", roundTripNum);
    return 0;
} 