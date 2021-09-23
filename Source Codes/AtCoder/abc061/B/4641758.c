#include <stdio.h>
int main(void){
    int a,b,n,m,road[50],i,j;
    for(j=0;j<50;j++){
        road[j]=0;
    }
    scanf("%d%d",&n,&m);
    for(i=0;i<m;i++){
        scanf("%d%d",&a,&b);
        for(j=0;j<n;j++){
            if(a-1==j) road[j]++;
            if(b-1==j) road[j]++;
        }
    }
    for(j=0;j<n;j++){
        printf("%d\n",road[j]);
    }
    return 0;
} 