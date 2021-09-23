#include <stdio.h>
long long Min(long long a,long long b){
    return a<=b?a:b;
}
int main()
{   long long a,b,c;
    scanf("%lld%lld%lld",&a,&b,&c);
    if(a%2==1&&b%2==1&&c%2==1){
        printf("%lld",Min(a*b,Min(b*c,c*a)));
    }else{
        printf("0");
    }

    return 0;
} 