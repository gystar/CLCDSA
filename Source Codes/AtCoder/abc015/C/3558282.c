#include <stdio.h>

int n, k;
int t[10][10];
int flag = 0;

void search(int x, int num) {
    if (n == num) {
        if (x == 0) {
            flag = 1;
            return;
        }
        return;
    }

    for (int i = 0; i < k; i++) {
        search(x ^ t[num][i], num + 1);
    }
}

int main() {
    scanf("%d %d", &n, &k);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++) {
            scanf("%d", &t[i][j]);
        }
    }

    search(0, 0);

    if (flag == 1) {
        printf("Found\n");
    } else {
        printf("Nothing\n");
    }
    return 0;
} 