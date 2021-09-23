#include <stdio.h>

int main() {
    int A, B, C;
    scanf("%d%d%d", &A, &B, &C);
    printf("%d\n", C <= A+B ? B+C
                 : A+B+B+1);
    return 0;
} 