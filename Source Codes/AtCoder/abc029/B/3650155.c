#include <stdio.h>
#include <string.h>

int main() {
    char s[11] = { 0 };
    int cnt = 0, len = 0;

    for (int i = 0; i < 12; i++) {
        scanf("%s", s);
        len = strlen(s);
        for (int j = 0; j < len; j++) {
            if (s[j] == 'r') {
                cnt++;
                break;
            }
        }
    }
    printf("%d\n", cnt);
    return 0;
} 