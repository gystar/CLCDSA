#include <stdio.h>

int main(void)
{
    int n,k,ans;
    scanf("%d%d", &n,&k);
    ans=k;

    for(int i=0; i<n-1; i++) ans*=k-1; 
    printf("%d", ans);
    return 0;
} 