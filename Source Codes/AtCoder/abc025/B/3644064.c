#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, a, b;
    char s[4];
    int d;
    int res = 0;

    scanf("%d %d %d", &n, &a, &b);
    for (int i = 0; i < n; i++) {
        scanf("%s %d", s, &d);

        if (d < a) {
            d = a;
        } else if (d > b) {
            d = b;
        }

        if (s[0] == 'E') {
            res += d;
        } else if (s[0] == 'W') {
            res -= d;
        }
    }

    if (res > 0) {
        printf("East %d\n", res);
    } else if (res < 0) {
        printf("West %d\n", abs(res));
    } else {
        printf("0\n");
    }
    return 0;
} 