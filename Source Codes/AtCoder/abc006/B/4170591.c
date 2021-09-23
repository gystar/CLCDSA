#include<stdio.h>

int main(){
    int n,ans,i;
    int tori[3]={0,0,1};

    scanf("%d",&n);
    if(n <=3){
        ans = tori[n-1];
    }
    for(i=3;i<n;i++){
        ans = (tori[0] + tori[1] + tori[2]) % 10007;
        tori[0]=tori[1];
        tori[1]=tori[2];
        tori[2]=ans;
    }
    printf("%d\n",ans);
    return 0;
} 