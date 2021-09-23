#include <stdio.h>

int main(void){
    long long a,b,c,k;
    scanf("%lld %lld %lld %lld",&a,&b,&c,&k);
    if (k%2==0){
        printf("%lld\n",a-b);
    } else {
        printf("%lld\n",b-a);
    }
	return 0 ;
} 