#include <stdio.h>
#define min(a, b) (a<b ? a:b)
#define swap(a, b) (a+=b, b=a-b, a-=b)
// ???

int main(int argc, char const *argv[]) {
    // ??
    int a[3];
    // ??
    for (size_t i = 0; i < 3; i++) {
        scanf("%d", &a[i]);
    }
    // ???
    for (size_t i = 0; i < 3; i++) {
        for (size_t j = i; j < 3; j++) {
            if (a[i] < a[j]) {
                swap(a[i], a[j]);
            }
        }
    }
    // ??
    printf("%d\n", a[1]);
    return 0;
} 