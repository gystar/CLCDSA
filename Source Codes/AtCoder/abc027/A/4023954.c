#include <stdio.h>

int main()
{   int l,m,n;
    scanf("%d%d%d",&l,&m,&n);
    if(l==m)printf("%d\n",n);
    else if(m==n)printf("%d\n",l);
    else printf("%d\n",m);
    return 0;
} 