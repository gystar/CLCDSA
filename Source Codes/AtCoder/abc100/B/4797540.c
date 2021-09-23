#include <stdio.h>
#include <math.h>

int main(void){
    int d, n;
    scanf("%d%d", &d, &n);
    n += n/100;
    int ans = pow(100, d) * n;    
    printf("%d\n", ans);
    return 0; 
} 