#include <stdio.h>
#include <string.h>
#define max_Size 51

int main(int argc, char const *argv[]) {
    // ??
    char A[max_Size], B[max_Size];
    // ??
    scanf("%s %s", A, B);
    // ??
    int sizea, sizeb;
    sizea = strlen(A);
    sizeb = strlen(B);
    // ??
    if (sizea > sizeb) {
        printf("%s\n", A);
    } else {
        printf("%s\n", B);
    }
    return 0;
} 