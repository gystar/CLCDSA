#include <stdio.h>

int main() {
    char s[101], t[101];
    int n, l, r, num;

    scanf("%s", s);
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &l, &r);

        l--;
        r--;

        num = 0;
        for (int j = r; j >= l; j--) {
            t[num] = s[j];
            num = num + 1;
        }

        for (int j = 0; j < num; j++) {
            s[l] = t[j];
            l++;
        }
    }

    printf("%s\n", s);
    return 0;
} 