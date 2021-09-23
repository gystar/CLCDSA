#include <stdio.h>
#include <stdlib.h>
int main(void){
    long long int w,a,b;
    scanf("%lld%lld%lld",&w,&a,&b);
    if(llabs(a-b)<=w){
        printf("0\n");
        return 0;
    }
    else printf("%lld\n",a>b+w?a-(b+w):b-(a+w));
    return 0;
} 