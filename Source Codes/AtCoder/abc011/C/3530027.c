#include <stdio.h>

int main() {
    int n, ng1, ng2, ng3;
    int flag = 0, count = 0;

    scanf("%d", &n);
    scanf("%d", &ng1);
    scanf("%d", &ng2);
    scanf("%d", &ng3);

    if (n == ng1 || n == ng2 || n == ng3) {
        flag = 1;
    } else {
        while (n > 0) {
            count++;
            n = n - 3;
            if (n == ng1 || n == ng2 || n == ng3) {
                n = (n + 3) - 2;
                if (n == ng1 || n == ng2 || n == ng3) {
                    n = (n + 2) - 1;
                    if (n == ng1 || n == ng2 || n == ng3) {
                        flag = 1;
                        break;
                    }
                }
            }
        }
    }

    if (flag == 1 || count > 100) {
        printf("NO\n");
    } else {
        printf("YES\n");
    }
    return 0;
} 