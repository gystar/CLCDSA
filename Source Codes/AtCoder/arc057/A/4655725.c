#include <stdio.h>

int main()
{   long long a,k,cnt=0;
    scanf("%lld%lld",&a,&k);
    if(k>0)
    while(a<2000000000000){
        a+=1+k*a;
        cnt++;
    }
    else cnt=2000000000000-a;
    printf("%lld",cnt);

    return 0;
} 