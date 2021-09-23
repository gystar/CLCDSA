#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long m, n, k;

    scanf("%lld%lld", &m, &n);

    if(2*m<n)
        k = (2*m+n)/4;
    else if(2*m==n)
        k = m;
    else
        k = n/2;

    printf("%lld\n", k);

    return 0;
} 