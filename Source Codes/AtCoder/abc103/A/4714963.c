#include <stdio.h>

int max(int a, int b, int c) {
    int p = a;
    if( p < b) { p = b; } 
    if( p < c) { p = c; }
    return p;
}

int min(int a, int b, int c) {
    int p = a;
    if( p > b) { p = b; }
    if( p > c) { p = c; }
    return p;
}

int main(void) {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%d\n", max(a,b,c) - min(a,b,c));
} 