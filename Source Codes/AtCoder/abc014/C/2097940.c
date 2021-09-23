#include <stdio.h>
#include <stdlib.h>
int x[1000001]={0};

int main(){
    int n;
    scanf("%d",&n);

    int a,b;
    int i;
    for(i=0;i<n;i++){
        scanf("%d %d",&a,&b);
        x[a]++;
        x[b+1]--;
    }
    int ans=-1;
    for(i=0;i<=1000000;i++){
        if(i)x[i]+=x[i-1];
        if(x[i]>ans)ans=x[i];
    }
    printf("%d\n",ans);
} 