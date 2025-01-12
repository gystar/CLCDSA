#include <stdio.h>
#include <math.h>

int main() {
    int tx1, ty1, tx2, ty2, T, V;
    int n, x, y, flag = 0;
    double len;

    scanf("%d %d %d %d %d %d", &tx1, &ty1, &tx2, &ty2, &T, &V);
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &x, &y);

        len = sqrt(pow(x - tx1, 2) + pow(y - ty1, 2)) 
                + sqrt(pow(tx2 - x, 2) + pow(ty2 - y, 2));

        if (len <= T * V) {
            flag = 1;
        }
    }

    if (flag == 1) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    return 0;
} 