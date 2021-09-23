#include<stdio.h>
char a[100100];
long long b[100100];
int main()
{
    long long n,q,i,j;
    scanf("%lld %lld",&n,&q);
    scanf("%s",a);
    for(i=0,j=0;a[i+1]!='\0';i++)
    {
        b[i]=j;
        if(a[i]=='A'&&a[i+1]=='C')
            j++;
    }
    b[i]=j;
    while(q--)
    {
        scanf("%lld%lld",&i,&j);
        printf("%lld\n",b[j-1]-b[i-1]);
    }
    return 0;
} 