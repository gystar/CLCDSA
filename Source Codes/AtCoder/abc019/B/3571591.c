#include <stdio.h>
#include <string.h>

int main() {
    char s[1001] = { 0 };
    char t;
    int len, counter = 0;

    scanf("%s", s);

    len = strlen(s);

    t = s[0];
    for (int i = 0; i <= len; i++) {
        if (t == s[i]) {
            counter++;
        } else {
            printf("%c%d", t, counter);
            t = s[i];
            counter = 1;
        }
    }
    printf("\n");
    return 0;
} 