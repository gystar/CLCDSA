#include <stdio.h>
int main(){
    int n,m;
    scanf("%d%d",&n,&m);
    int a[m],b[m],road[n];
    for (int i=0;i<m;i++){
        scanf("%d%d",&a[i],&b[i]);
    }
    for (int i=0;i<n;i++){
      road[i]=0;
        for (int j=0;j<m;j++){
            if (i+1==a[j]){
                road[i]++;
            }
            if (i+1==b[j]){
                road[i]++;
            }
        }
        printf("%d\n",road[i]);
    }
    return 0;
} 