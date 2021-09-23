#include <stdio.h>

int n, data[100001], tmp;

int main(void)
{
    int i, j;
    long long int ans;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &data[i]);
    }
    tmp = 0;
    for (i = 0; i < n; i++) {
        if (data[i] != 0) {
            data[i] += tmp;
            ans += data[i] / 2;
            tmp = data[i] % 2;
        } else {
            tmp = 0;
        }
    }
    printf("%lld\n", ans);
    return 0;
} 