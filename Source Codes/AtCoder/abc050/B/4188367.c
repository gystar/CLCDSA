#include<stdio.h>
int main(void){
    int n,m,i,sum,tm=0,stm;
    int t[100001],p,x;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&t[i]);
        tm+=t[i];
    }
    scanf("%d",&m);
    for(i=0;i<m;i++){
        scanf("%d %d",&p,&x);
        stm=tm-(t[p-1]-x);
        printf("%d\n",stm);
    }
    return 0;
} 