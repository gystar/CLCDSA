#include <stdio.h>
int Min(int a,int b){
    return a<=b?a:b;
}
int main()
{   int n,k;
    scanf("%d%d",&n,&k);
    int x[n];
    for(int i=0;i<n;i++){
        scanf("%d",&x[i]);
    }
    int ans=0;
    for(int i=0;i<n;i++){
        ans+=2*Min(k-x[i],x[i]);
    }
    printf("%d",ans);
    return 0;
} 