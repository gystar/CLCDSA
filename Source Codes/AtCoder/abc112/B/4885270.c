#include <stdio.h>
#include <math.h>

int main(){
    int n,T,ans=10000;
    scanf("%d%d",&n,&T);
    for(int i = 0;i < n;i ++){
        int c,t;
        scanf("%d%d",&c,&t);
        ans = t<=T&&c<ans?c:ans;
    }
    if(ans==10000) printf("TLE\n");
    else printf("%d",ans);
    return 0;
} 