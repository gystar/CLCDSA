#include <stdio.h>
int main ()
{
    int n,a,sum=0 ;
    scanf ("%d",&n);
    int s=n;
    //a=n%10;
    while (n>0)
    {
        a=n%10;
        sum=sum+a;
        n=n/10;
    }
    //printf ("%d",n);
    if (s%sum==0) printf ("Yes\n");
    else printf ("No\n");
    return 0;
} 