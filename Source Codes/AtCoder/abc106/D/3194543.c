#include <stdio.h>
int main(void){
    int n,m,q;
    scanf("%d%d%d",&n,&m,&q);
    int a[n][n];
    for(int i=0;i<n;i++)for(int j=0;j<n;j++)a[i][j]=0;
    int e,f;
    for(int i=0;i<m;i++){
        scanf("%d%d",&e,&f);
        a[e-1][f-1]++;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            a[i][j+1]+=a[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=n-1;j>0;j--){
            a[j-1][i]+=a[j][i];
        }
    }
    for(int i=0;i<q;i++){
        scanf("%d%d",&e,&f);
        printf("%d\n",a[e-1][f-1]);
    }
} 