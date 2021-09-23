#include <stdio.h>

int main(void) {
    int n;
    float ex;

    scanf("%d", &n);

    ex = (float)(1 + n) / 2;

    printf("%d\n", (int)(ex*10000));

    return 0;
} 