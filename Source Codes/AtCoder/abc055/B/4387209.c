#include<stdio.h>
#include<math.h>

int main(void)
{
    long int a = 1000000007, ans=1;
    int n, i;
    scanf("%d", &n);
    for(i=1;i<=n;i++){
      ans = (ans * i) % a;
    }
    printf("%lld", ans);
    return 0;
} 