#include <stdio.h>

int main() {
    float a, b, c, d;
    float twr, awr;

    scanf("%f%f%f%f", &a, &b, &c, &d);

    twr = b / a;
    awr = d / c;
    if (twr > awr) {
        printf("TAKAHASHI\n");
    } else if (twr < awr) {
        printf("AOKI\n");
    } else {
        printf("DRAW\n");
    }
    return 0;
} 