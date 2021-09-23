#include <stdio.h>
// ?????????
void Judge(int A, int B, int C) {
    int plus = A+B;
    int minus = A-B;
    if ( plus==C && minus==C ) {
        printf("?\n");
    } else if (plus==C && minus!=C) {
        printf("+\n");
    } else if (plus!=C && minus==C) {
        printf("-\n");
    } else {
        printf("!\n");
    }
}
int main(int argc, char const *argv[]) {
    // ??
    int A, B, C;
    // ??
    scanf("%d %d %d", &A, &B, &C);
    // ??
    Judge(A, B, C);
    return 0;
} 