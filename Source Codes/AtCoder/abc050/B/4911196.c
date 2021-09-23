#include <stdio.h>
int main(void)
{
    int n;
    int ans;
    scanf("%d", &n);
    int t[n];
    for(int i=0; i<n; i++) scanf("%d", &t[i]);
    int m;
    scanf("%d", &m);
    int p[m], x[m];
    for(int i=0; i<m; i++) scanf("%d%d", &p[i], &x[i]);
    
    int pre=0;
    for(int i=0; i<n; i++) pre+=t[i];
    for(int i=0; i<m; i++)
    {
        ans=ans-t[p[i]]+x[i];
        printf("%d\n", pre-t[p[i]-1]+x[i]);
    }
    return 0;
} 