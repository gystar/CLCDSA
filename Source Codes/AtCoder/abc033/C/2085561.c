#include <stdio.h>
#include <string.h>

int main() {
    char s[100001] = {};
    scanf("%s", s);
    long ans = 0, len = strlen(s);
    int tmp = 0;
    for (long i=0; i<len; i++) {
        if (s[i] == '0')
            tmp = 1;
        else if (s[i] == '+') {
            if (tmp != 1)
                ans++;
            tmp = 0;
        }
    }
    if (tmp != 1)
        ans++;
    printf("%ld\n", ans);
} 