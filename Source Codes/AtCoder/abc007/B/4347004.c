#include <stdio.h>
#include <string.h>
#define String_max 102

int main(int argc, char const *argv[]) {
    // ??
    char A[String_max];
    // ??
    scanf("%s", A);
    int length = strlen(A);
    // ??
    if (length==1 && A[0]=='a') {
        printf("-1\n");
    } else {
        printf("a\n");
    }
    return 0;
} 