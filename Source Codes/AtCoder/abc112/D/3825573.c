#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n, m;
    int i;
    scanf("%d %d",&n,&m);
    int nn;
    for(nn=m/n; m%nn!=0; nn--);
    printf("%d",nn);
    return 0;
} 