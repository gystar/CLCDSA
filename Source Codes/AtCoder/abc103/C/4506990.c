#include <stdio.h>

int main(){
    int n;scanf("%d",&n);
    int a[n],ans=0;for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        ans+=a[i]-1;
    }   
    printf("%d",ans);
    return 0;
} 