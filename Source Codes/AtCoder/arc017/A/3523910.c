#include<stdio.h>
int main()
{
    long a,i;
    scanf("%ld",&a);
    for( i=a/2;i>1;i--)
    {
        if(a%i==0)
        {
            printf("NO\n");
            break;
        }
        else if(i==2)
        {
            printf("YES\n");
        }
    }
    return 0;
} 