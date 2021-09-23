#include <stdio.h>
int main(void){
    // Your code here!
    int n,w=0,s,t,cnt=0,x;
    scanf("%d%d%d",&n,&s,&t);
    for(int i=0;i<n;i++){
        scanf("%d",&x);
        w+=x;
        if(s<=w && w<=t)
            cnt++;
    }
    printf("%d\n",cnt);
} 