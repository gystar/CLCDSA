#include<stdio.h>
int main(){
    int n,s,t,w,a,i = 0,cnt = 0;
    scanf("%d%d%d%d",&n,&s,&t,&w);
    if(s<=w && w<=t)cnt++;
    while(i<n-1){
        scanf("%d",&a);
        w += a; 
        if(s<=w && w<=t)cnt++;
        i++;
    }
    printf("%d\n",cnt);
    return 0;
} 