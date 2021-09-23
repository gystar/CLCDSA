#include<stdio.h>

int main(void){
    int k;
    scanf("%d", &k);
    int ans;
    if(k % 2 == 0){
        ans = k * k / 4; 
    }
    else{
        ans = k / 2 * (k / 2 + 1);
    }
    printf("%d\n", ans);
    return 0;
} 