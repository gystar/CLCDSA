#include <stdio.h>
int main(void){
    int n,m,ans=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&m);
        if(m<80)ans+=(80-m);
    }
    printf("%d\n",ans);
    return 0;
} 