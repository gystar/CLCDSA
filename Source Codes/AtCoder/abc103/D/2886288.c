#include <stdio.h>
#define min(a,b) (a)>(b)?b:a

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int a[m+1], b[m+1];
    int i;
    for(i=1;i<=m;i++) scanf("%d %d", &a[i], &b[i]);
    
    int a_min[n+1];
    int min;
    for(i=1;i<=m;i++) min = min(a[i], min);
    for(i=0;i<=n;i++) a_min[i] = 111111;
    for(i=1;i<=m;i++) a_min[a[i]] = min(a_min[a[i]], b[i]);
    
    int left, right;
    left = min, right = a_min[min];
    int count = 0;
    for(i=1;i<=n;i++){
        if(a_min[i]!=111111){
            if(right<=i){
                count++;
                left = i, right = a_min[i];
            } else if(left<i&&right>=a_min[i]){
                left = i, right = a_min[i];
            } else if(left<i&&right<a_min[i]){
                left = i;
            }
        }
    }
    count++;
    printf("%d", count);
    
    return 0;
} 