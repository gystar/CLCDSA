#include <stdio.h>
#define N 4

int main(int argc, char const *argv[]) {
    // ???
    char string[N+1][N+1];
    // ??
    for (size_t i = 0; i < N; i++) {
        for (size_t j = 0; j < N; j++) {
            scanf("%c ", &string[i][j] );
        }
    }
    // ??????
    for (int i = N-1; i >= 0; i--) {
        for (int j = N-1; j >= 0; j--) {
            printf("%c ", string[i][j] );
        }
        printf("\n");
    }
    return 0;
} 