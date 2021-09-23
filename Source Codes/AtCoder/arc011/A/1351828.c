#include <stdio.h>

int main(){
    int n,m,N;
    scanf("%d %d %d",&m,&n,&N);
    int now=N;
    while(1){
        if(now-m<0)break;
        else{
            now-=m;
            now+=n;
            N+=n;
        }
    }
    printf("%d\n",N);
    return 0;
} 