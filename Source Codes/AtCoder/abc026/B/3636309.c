#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int compare(const void *a, const void *b) {
    return *(int *)b - *(int *)a;
}

int main() {
    int n;
    int r[1001] = { 0 };
    int sum = 0;

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &r[i]);
    }

    qsort(r, n, sizeof(int), compare);

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            sum += r[i] * r[i];
        } else {
            sum -= r[i] * r[i];
        }
    }

    printf("%.10f\n", sum * M_PI);
    return 0;
} 