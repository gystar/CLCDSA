#include <stdio.h>

int main() {
    int h1, w1, h2, w2;
    int flag = 0;

    scanf("%d %d", &h1, &w1);
    scanf("%d %d", &h2, &w2);

    if (h1 == h2) flag = 1;
    if (h1 == w2) flag = 1;
    if (w1 == h2) flag = 1;
    if (w1 == w2) flag = 1;

    if (flag == 1) printf("YES\n");
    else printf("NO\n");
    return 0;
} 