#include <stdio.h>

void sort(int n, int *r) {
    int tmp;
    for (int i = 0; i < n; i++) {
        for (int j = n - 1; j > i; j--) {
            if (r[i] < r[j]) {
                tmp = r[i];
                r[i] = r[j];
                r[j] = tmp;
            }
        }
    }
}

int main() {
    int n, k;
    int r[101] = { 0 };
    float rate = 0.0;

    scanf("%d %d", &n, &k);
    for (int i = 0; i < n; i++) {
        scanf("%d", &r[i]);
    }

    sort(n, r);

    for (int i = k - 1; i >= 0; i--) {
        rate = (rate + r[i]) / 2;
    }

    printf("%f\n", rate);
    return 0;
} 