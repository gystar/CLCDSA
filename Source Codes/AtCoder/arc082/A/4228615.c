#include <stdio.h>

int b[100001];

int main()
{
    int i,j,n,max=0,c;
    scanf("%d",&n);
    int a[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
        if(a[i] != 0)
        {
            ++b[a[i]-1];
            ++b[a[i]];
            ++b[a[i]+1];
        }
        else
        {
            ++b[a[i]];
            ++b[a[i]+1];
        }
        if( b[a[i]] > max )
        {
            max=b[a[i]];
        }
        if( b[a[i]+1] > max )
        {
            max=b[a[i]+1];
        }
        if( b[a[i]-1] > max && a[i] != 0 )
        {
            max=b[a[i]-1];
        }
    }
    printf("%d",max);
    return 0;
} 