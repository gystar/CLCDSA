#include <stdio.h>

int main(void){
    int N;
    double ans = 0;
    scanf("%d", &N);
    for(int i = 0; i < N; i++) {
        double x;
        scanf("%lf", &x);
        char str[3];
        scanf("%s", str);
        ans += str[0] == 'J' ? x : x * 380000;
    }
    printf("%lf", ans);
} 