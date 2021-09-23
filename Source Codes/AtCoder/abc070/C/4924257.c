#include <stdio.h>

long int gcd(long int a, long int b)
{
    long int r=0, t=0;

    if(a<b){
        t=a;
        a=b;
        b=t;
    }
    while(b!=0){
        r=a%b;
        a=b;
        b=r;
    }

    return a;
}        
long int lcm(long int a, long int b)
{
    return (a*b)/gcd(a, b);
}

int main(void)
{
    int n;
    scanf("%d", &n);
    long int t[n], i;
    for(i=0;i<n;i++){
        scanf("%ld", &t[i]);
    }

    for(i=0;i<n-1;i++){
        t[i+1]=t[i]/gcd(t[i], t[i+1])*t[i+1];
    }
    
    printf("%ld\n", t[i]);
    return 0;
} 