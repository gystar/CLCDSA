#include <stdio.h>

int main(void) {
    int i,n,max,ans;
    scanf("%d",&n);
    int x[n];
    ans=0;
    for (i=0;i<n;i++) {
        scanf("%d",&x[i]);
    }
    max=x[0];
    for (i=0;i<n;i++) {
        if (x[i]>=max)
            max=x[i];
    }
    for (i=0;i<n;i++) {
        ans+=x[i];
    }
    printf("%d",ans-max/2);
} 