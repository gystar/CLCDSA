#include <stdio.h>
int main(void){
    int n, k, num = 1;
    scanf("%d %d", &n, &k);
    for(int i = 0; i < n-1; i ++){
        num *= (k-1);
    }
    num *= k;
    printf("%d\n", num);
    return 0;
} 