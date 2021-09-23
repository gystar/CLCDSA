#include <stdio.h>

int main(void){
    int n,a,b;
    scanf("%d",&n);
    int count[1000001];
    for (int i=0; i<1000001; i++){
        count[i]=0;
    }
    for (int i=0; i<n; i++){
        scanf("%d%d",&a,&b);
        count[a]++;
        count[b+1]--;
    }
    int ans=count[0];
    for (int i=1; i<1000001; i++){
        count[i]+=count[i-1];
        if (ans<count[i]){
            ans=count[i];
        }
    }
    printf("%d\n",ans);
    return 0;
} 