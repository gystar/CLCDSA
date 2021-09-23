#include <stdio.h>
int main(){
    int n,m;
    scanf("%d%d",&n,&m);
    int a[50]={0};
    for(int i=0;i<m;i++){
        int tmp1,tmp2;
        scanf("%d%d",&tmp1,&tmp2);
        a[tmp1-1]++;
        a[tmp2-1]++;
    }
    for(int i=0;i<n;i++){
        printf("%d\n",a[i]);
    }
  
    return 0;
} 