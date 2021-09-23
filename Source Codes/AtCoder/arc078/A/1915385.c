#include<stdio.h>
#include<math.h>
int main()
{
    long long int b,c,i,j,m=0,n=0;
    scanf("%lld",&i);
    long long int a[i-1];
    for(j=0;j<i;j++){
        scanf("%lld",&a[j]);
        m+=a[j];
        }
    b=llabs(m-2*a[0]);
    for(j=0;j<i-1;j++){
        n+=a[j];
        c=llabs(m-2*n);
        if(c<b) b=c;
    }
    printf("%lld",b);
    return 0;
} 