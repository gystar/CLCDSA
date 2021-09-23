#include <stdio.h>
#define MIN(a, b) ((a) < (b) ? (a) : (b))
int main(void){
    long long a, b, k, l;
    scanf("%lld %lld %lld %lld", &a, &b, &k, &l);
    printf("%lld\n", MIN(k / l * b + k % l * a, (k / l + 1) * b));
} 