#include <stdio.h>

int main(int argc, char const *argv[]) {
    // ??
    char S[5];
    int N;
    // ??
    scanf("%s\n", S);
    scanf("%d", &N);
    N--;
    // ??
    printf("%c%c\n", S[N/5], S[N%5]);
    return 0;
} 