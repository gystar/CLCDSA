#include <stdio.h>

int sum(int n){
    return n * (n + 1) / 2;
}
int main(void){
    int a, b;
    scanf("%d%d", &a, &b);
    int ans =  sum(b - a - 1) - a;
    printf("%d\n", ans);
    return 0; 
} 