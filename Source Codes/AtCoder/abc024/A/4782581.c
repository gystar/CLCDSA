#include <stdio.h>

int main(int argc, char const *argv[]) {
    // ??
    int A, B, C, K;
    int child, adult;
    // ??
    scanf("%d %d %d %d", &A, &B, &C, &K);
    scanf("%d %d", &child, &adult);
    // ??
    int cost;
    if (K <= (child+adult)) {
        cost = (A*child+B*adult) - C*(child+adult);
    } else {
        cost = A*child+B*adult;
    }
    // ??
    printf("%d\n", cost);
    return 0;
} 