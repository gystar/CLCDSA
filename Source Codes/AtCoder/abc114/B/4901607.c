#include <stdio.h>
#include <stdlib.h>
 
int main(void) {
    long long X;
    int ans = 1000;
    scanf("%lld", &X);

    while(X > 99) {
        int t = X % 1000;
        if(abs(753-t) < ans) {
            ans = abs(753-t);
        }
        X /= 10;
    }
    printf("%d\n", ans);
} 