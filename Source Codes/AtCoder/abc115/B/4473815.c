#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
#include<string.h>

int main(){
    int N,max=0,ans=0,p;
    scanf("%d",&N);
    int i;
    for(i=0;i<N;i++){
        scanf("%d",&p);
        ans += p;
        max = max>p? max:p;
    }
    printf("%d",ans-max/2);
    return 0;
} 