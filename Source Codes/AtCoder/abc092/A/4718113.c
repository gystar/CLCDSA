#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int a, b, c, d;
    scanf("%d%d%d%d", &a, &b, &c, &d);
    int ans;
    if(a > b){
        ans = b;
    }else{
        ans = a;
    }
    if(c > d){
        ans += d;
    }else{
        ans += c;
    }
    printf("%d\n",ans);
    return 0;
} 