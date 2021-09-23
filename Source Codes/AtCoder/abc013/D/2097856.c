#include <stdio.h>
#include <stdlib.h>
int t[2][100001];
int a[200001];
int ans[100001];

void Swap(int (*a)[200001],int x,int y){
    int tmp=a[0][x];
    a[0][x]=a[0][y];
    a[0][y]=tmp;
}

int main(){
    int n,m;
    long long d;
    scanf("%d %d %lld",&n,&m,&d);

    int i,j,k;
    for(i=1;i<=n;i++)t[0][i]=i;
    for(i=0;i<m;i++){
        scanf("%d",&a[i]);
    }
    for(i=m-1;i>=0;i--){
        Swap(t,a[i],a[i]+1);
    }
    for(i=1;i<=n;i++)ans[i]=i;
    int x=0;
    while(d){
        if(x!=0)for(i=1;i<=n;i++)t[x%2][i]=t[1-x%2][t[1-x%2][i]];
        if(d&1){
            for(i=1;i<=n;i++){
                ans[i]=t[x%2][ans[i]];
            }
        }
        x++;;
        d=d>>1;
    }
    for(i=1;i<=n;i++){
        printf("%d\n",ans[i]);
    }
} 