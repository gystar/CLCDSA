#include<stdio.h>
int main()
{
    int n,f=1;
    scanf("%d",&n);
    for(int i=2;i<n;i++)
    {
        f=n%i;
        if(f==0)
        {
            printf("NO\n");
            break;
        }

    }
    if(f!=0)
        printf("YES\n");

} 