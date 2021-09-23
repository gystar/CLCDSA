#include <stdio.h>
// ???
int main(int argc, char const *argv[]) {
    // ??
    int num[3], No[3] = {0};
    // ??
    for (size_t i = 0; i < 3; i++) {
        scanf("%d", &num[i]);
    }
    // ??
    for (size_t i = 0; i < 3; i++) {
        for (size_t j = 0; j < 3; j++) {
            if (num[i] < num[j]) {
                No[i] ++;
            }
        }
    }
    // ??
    for (size_t i = 0; i < 3; i++) {
        No[i] = No[i]+1;
        printf("%d\n", No[i]);
    }
    return 0;
} 