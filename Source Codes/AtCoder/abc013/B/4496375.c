#include <stdio.h>
#define min(a, b) (a<b ? a:b)
// ????????
int NextDigit (int num) {
    if (num == 9) {
        return 0;
    } else {
        return num+1;
    }
}
// ??????????
int Distancel (int a, int b) {
    int res = 0;
    while (a != b) {
        ++res;
        a = NextDigit(a);
    }
    res = min(res, 10-res);
    return res;
}

int main(int argc, char const *argv[]) {
    // ??
    int a, b;
    // ??
    scanf("%d %d", &a, &b );
    // ??
    int ans = Distancel(a, b);
    // ??
    printf("%d\n", ans );
    return 0;
} 