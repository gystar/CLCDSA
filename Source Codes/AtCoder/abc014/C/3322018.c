#include <stdio.h>
int max(int a, int b){return a>b?a:b;}
int main(void){
    int n,a,b,c[1000001]={};
    scanf("%d",&n);
    for (int i=0; i<n; i++){
        scanf("%d%d",&a,&b);
        c[a]++;
        c[b+1]--;
    }
    for (int i=1; i<1000001; i++){
        c[i]+=c[i-1];
        c[0]=max(c[0],c[i]);
    }
    printf("%d\n",c[0]);
    return 0;
} 