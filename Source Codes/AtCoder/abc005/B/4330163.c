#include <stdio.h>
#define min(a, b) (a<b ? a:b)

int main(int argc, char const *argv[]) {
    // ??
    int N;
    int T[101];
    int Min = 1000;
    // ??
    scanf("%d", &N );
    for (size_t i = 0; i < N; i++) {
        scanf("%d", &T[i]);
    }
    // ??
    for (size_t i = 0; i < N; i++) {
        if (Min > T[i]) {
            Min = T[i];
        }
    }
    // ??
    printf("%d\n", Min );
    return 0;
} 