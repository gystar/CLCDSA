#include <stdio.h>
int main()
{
    int n,m,sum = 0;
    scanf("%d\n",&n);
    for( int i = 0 ; i < n ; i++)
    {
        scanf("%d",&m);
      if( m < 80 )
      {
         sum += (80 - m);
         }
    }
    printf("%d\n",sum);
    return 0;
} 