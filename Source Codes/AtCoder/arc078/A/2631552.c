#include <stdio.h>
#include <string.h>
#define MAX 200000
int main(void) {
    long long n, i, a[MAX], left=0, right=0, dif, min;
    scanf("%lld", &n);
    for(i=0; i<n; i++) {
        scanf("%lld", &a[i]);
        right += a[i];
    }
    left = a[0];
    right -= a[0];
    min = left>right ? left-right : right-left;
    
    for(i=1; i<n-1; i++) {
        left += a[i];
        right -= a[i];
        dif = left>right ? left-right : right-left;
        if(dif<min)
            min = dif;
    }
    printf("%lld\n", min);
} 