#include<stdio.h>
int main(){
    int a[3],b[3],ans = 0;
    for(int i;i<3;i++){
        scanf("%d%d",&a[i],&b[i]);
        ans += a[i]*b[i]/10;
    }
    printf("%d\n",ans);
    return 0;
} 