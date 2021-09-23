#include <stdio.h>

int abs(int x){
    return (x > 0) ? x : -x;
}
int max(int a, int b){
    return (a > b) ? a : b;
}

int main(void){
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    int d, e, f;

    d = abs(a-b);
    e = abs(b-c);
    f = abs(c-a);
    int m = max (d, max(e, f)); 
    printf("%d\n", d + e + f - m);
    return 0; 
} 