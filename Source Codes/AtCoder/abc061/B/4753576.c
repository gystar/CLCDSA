#include <stdio.h>
int main(void)
{
    int n, m, a[51]={0}, b[51]={0}, cnt[51]={0}, i;
    scanf("%d%d", &n, &m);
    for(i=0;i<m;i++){
        scanf("%d%d" ,&a[i], &b[i]);
    }

    for(i=0;i<m;i++){
        cnt[a[i]-1]++;
        cnt[b[i]-1]++;
    }

    for(i=0;i<n;i++){
        printf("%d\n", cnt[i]);
    }

    return 0;
} 