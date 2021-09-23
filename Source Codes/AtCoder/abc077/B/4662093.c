#include <stdio.h>
#include <math.h>
int main(void){
    long long int n;
    double k;
    scanf("%lld",&n);
    k=sqrt((double)n);
    printf("%lld\n",(long long int)(floor(k)*floor(k)));
    return 0;
} 