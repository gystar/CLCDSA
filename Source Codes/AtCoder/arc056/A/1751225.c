#include <stdio.h>
int main() {
long long a, b, k, l, x, y = 0;
scanf("%lld %lld %lld %lld",&a,&b,&k,&l);
x = k / l;
y = k % l;
if (b <= y * a) {
printf("%lld\n",(x + 1) * b);
} else {
printf("%lld\n",x * b + y * a);
} return 0; 
} 