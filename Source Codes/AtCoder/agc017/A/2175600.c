#include <stdio.h>
#include <math.h>
int main() {
    int n, p, o=0, e=0;
    scanf("%d %d", &n, &p);
    for (int i=0; i<n; i++) {
        int k;
        scanf(" %d", &k);
        if (k % 2)
            o++;
        else
            e++;
    }
    if (o == 0) {
        if (p == 1)
            puts("0");
        else
            printf("%ld\n", (long)powl(2, n));
    } else
        printf("%ld\n", (long)powl(2, n-1));
} 