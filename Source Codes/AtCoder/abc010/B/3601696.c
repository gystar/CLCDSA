#include <stdio.h>
int main()
{   int n,a[11],i,ans=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        while(a[i]%2==0||a[i]%3==2){
            a[i]--;
            ans++;
        }
    }
    printf("%d\n",ans);
    
    return 0;
} 