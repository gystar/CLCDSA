#include <stdio.h>
int main()
{   long long n,m;
    scanf("%lld%lld",&n,&m);
    if(n>=m/2){
        printf("%lld",m/2);
    }else{
        printf("%lld",n+(m-n*2)/4);
    }
    return 0;
} 