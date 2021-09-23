#include <stdio.h>
#define size 1000005
#define max(a, b) (a>b ? a:b)
// Imos?
int retCostmer(int n, int a[], int b[]) {
    int costmers = 0;
    int Imos[size] = {0};
    // ????????
    for (size_t i = 0; i < n; i++) {
        Imos[a[i]] ++;
        Imos[b[i]+1] --;
    }
    // ??
    costmers = Imos[0];
    for (int i = 1; i < size; i++) {
        Imos[i] += Imos[i-1];
        costmers = max(costmers, Imos[i]);
    }
    return costmers;
}

int main(int argc, char const *argv[]) {
    // ??
    int n;
    int a[size], b[size];
    // ??
    scanf("%d", &n);
    for (size_t i = 0; i < n; i++) {
        scanf("%d %d", &a[i], &b[i]);
    }
    // ??
    int costmers = retCostmer(n, a, b);
    printf("%d\n", costmers);
    return 0;
} 