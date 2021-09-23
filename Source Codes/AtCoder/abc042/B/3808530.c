#include <stdio.h>
#include <string.h>

int main() {
    int l, n;
    char s[101][101], tmp[101];

    scanf("%d %d", &n, &l);
    for (int i = 0; i < n; i++) {
        scanf("%s", s[i]);
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - 1; j++) {
            if (strcmp(s[j], s[j+1]) >= 0) {
                strcpy(tmp, s[j]);
                strcpy(s[j], s[j+1]);
                strcpy(s[j+1], tmp);
            }
        }
    } 

    for (int i = 0; i < n; i++) {
        printf("%s", s[i]);
    }
    printf("\n");
    return 0;
} 