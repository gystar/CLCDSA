#include <stdio.h>

int main(int argc, char* argv[])
{
    int s = 0;
    int t = 0;
    scanf("%d %d", &s, &t);

    int num = 0;
    num = t - (s - 1);
    printf("%d\n", num);

    return 0;
} 