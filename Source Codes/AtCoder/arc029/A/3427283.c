#include <stdio.h>
int min(int a,int b){return a>b?b:a;}
int max(int a,int b){return a<b?b:a;}
int main(void){
    int n,sum=0,ans=1e9;
    scanf("%d",&n);
    int t[n];
    for (int i=0; i<n; i++){
        scanf("%d",&t[i]);
        sum+=t[i];
    }
    for (int i=0; i<(1<<n); i++){
        int tmp=0;
        for (int j=0; j<n; j++){
            if ((1&i>>j)==1){
                tmp+=t[j];
            }
        }
        ans=min(ans,max(tmp,sum-tmp));
    }
    printf("%d\n",ans);
    return 0;
} 