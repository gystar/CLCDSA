#include <stdio.h>
int main() {
int n, a, b;
scanf("%d", &n);
scanf("%d", &a);
scanf("%d", &b);
if(n <= 5) {
printf("%d\n", b * n);
} else {
printf("%d\n", b * 5 + (n - 5) * a);
} return 0;
} 