#include <stdio.h>
int main(void){
    int l,r,ans=0;
    scanf("%d%d",&l,&r);
    int p[l],q[r];
    for (int i=0; i<l; i++){
        scanf("%d",&p[i]);
    }
    for (int i=0; i<r; i++){
        scanf("%d",&q[i]);
    }
    for (int i=0; i<l; i++){
        for (int j=0; j<r; j++){
            if (p[i]==q[j]){
                ans++;
                p[i]=0;
                q[j]=1;
            }
        }
    }
    printf("%d\n",ans);
    return 0;
} 