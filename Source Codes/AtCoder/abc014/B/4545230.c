#include <stdio.h>
#define sizeA 1001
// ?????
int TotalPrice (int n, int X, int price[]) {
    int totalPrice = 0;
    for (int i = 0; i < n; i++) {
        if ( (X&1) == 1) {
            totalPrice += price[i];
        }
        X = X>>1;
    }
    return totalPrice;
}

int main(int argc, char const *argv[]) {
    // ??
    int n, X;
    int price[sizeA] = {0};
    // ??
    scanf("%d %d", &n, &X);
    for (int i = 0; i < n; i++) {
        scanf("%d", &price[i]);
    }
    // ??
    printf("%d\n", TotalPrice(n, X, price));
    return 0;
} 