#include<stdio.h>
long long int jdz(long long int x)
{
    if(x<0) return -x;
    else return x;
}
int main()
{
    int n,i,x;
    long long int a[200005],mini;
    scanf("%d",&n);
    scanf("%lld",&a[0]);
    for(i=1;i<n;i++){
        scanf("%lld",&a[i]);
        a[i]=a[i-1]+a[i];
    }
    mini=jdz(a[n-1]-2*a[0]);
    for(i=1;i<n-1;i++){
        if(jdz(a[n-1]-2*a[i])<mini){
        mini =jdz(a[n-1]-2*a[i]);
        }
    }
    printf("%lld",mini);
    return 0;
} 