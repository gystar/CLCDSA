#include <stdio.h>

int main(int argc, char const *argv[]) {
    // ??
    int N, S, T;
    // ??
    scanf("%d %d %d", &N, &S, &T);
    int a[N];
    for (size_t i = 0; i < N; i++) {
        scanf("%d", &a[i]);
    }
    // ??
    int weight = 0;
    int no = 0, cnt = 0;
    while (no < N) {
        weight += a[no];
        if (S<=weight && weight<=T) {
            cnt++;
        }
        no ++;
    }
    // ??
    printf("%d\n", cnt);
    return 0;
} 