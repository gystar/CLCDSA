#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n, m, k;
    int i, j, ans;
    scanf("%d %d",&n,&m);
    int nn = m/n;
    while(m%nn!=0) {
        nn--;
    }
    printf("%d",nn);
    return 0;
} 