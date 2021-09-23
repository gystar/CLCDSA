#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,m,i;
    scanf("%d%d",&n,&m);
    for(i=m/n;i>=1;i--)
    {
        if(m%i==0){printf("%d\n",i);break;}
    }
    return 0;
} 