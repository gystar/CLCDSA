#include <stdio.h>

int main() {
    int n;
    char str[51] = { 0 };
    int s[51][51];

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%s", str);
        for (int j = 0; j < n; j++) {
            if (str[j] == 'o') {
                s[i][j] = 0;
            } else if (str[j] == 'x') {
                s[i][j] = 1;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = n - 1; j >= 0; j--) {
            if (s[j][i] == 0) {
                printf("o");
            } else if (s[j][i] == 1) {
                printf("x");
            }
        }
        printf("\n");
    }
    return 0;
} 