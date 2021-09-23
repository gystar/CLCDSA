#include <stdio.h>

int main(){
    int n;scanf("%d",&n);
    int a[n];
    int ans;
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        while(a[i]%2==0){a[i]/=2;ans++;}
    }
    printf("%d",ans);
    return 0;
} 