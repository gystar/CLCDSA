#include <stdio.h>
int main(void){
    // Your code here!
    int n,x,c[100005]={0},cnt=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&x);
        if(c[x]==0) c[x]=1;
        else cnt++;
    }
    printf("%d\n",cnt);
} 