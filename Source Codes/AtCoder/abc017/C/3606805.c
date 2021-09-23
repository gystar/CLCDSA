#include <stdio.h>
 
int main() {
    int n, m, l, r, s;
    int t[100001] = { 0 }, all = 0, tmp = 0;
 
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++) {
        scanf("%d %d %d", &l, &r, &s);
        l--;
        t[l] += s;
        t[r] -= s;
        all += s;
    }
 
    tmp = all;
    for (int i = 0; i < m; i++) {
        if (i > 0) {
            t[i] += t[i-1];
        }
        if (tmp > t[i]) {
            tmp = t[i];
        }
    }
    printf("%d\n", all - tmp);
    return 0;
} 