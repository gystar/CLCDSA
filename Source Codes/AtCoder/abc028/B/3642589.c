#include <stdio.h>
#include <string.h>

int main() {
    int m[101] = { 0 };
    char s[101] = { 0 };
    int len = 0;

    scanf("%s", s);
    len = strlen(s);
    for (int i = 0; i < len; i++) {
        m[s[i]]++;
    }

    for (int i = 'A'; i <= 'F'; i++) {
        printf("%d", m[i]);
        if (i != 'F') {
            printf(" ");
        }
    }
    printf("\n");
    return 0;
} 