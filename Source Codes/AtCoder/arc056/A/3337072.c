#include <stdio.h>
int main(void){
    long long a,b,k,l;
    scanf("%lld%lld%lld%lld",&a,&b,&k,&l);
    if ((k+l-1)/l*b<(k/l)*b+(k%l)*a){
        printf("%lld\n",(k+l-1)/l*b);
    } else {
        printf("%lld\n",(k/l)*b+(k%l)*a);
    }
    return 0;
} 