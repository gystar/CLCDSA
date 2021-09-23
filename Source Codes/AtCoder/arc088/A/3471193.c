#include <stdio.h>
int main(){
    long long y,x,cnt=1;
    scanf("%ld%ld",&x,&y);
    while(x*2<=y){
        x*=2;
        cnt++;
    }
    printf("%ld",cnt);
    return 0;
} 