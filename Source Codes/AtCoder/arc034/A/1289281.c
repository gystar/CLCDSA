#include <stdio.h>
int main(void){
    int n, i;
    double MAX = 0.0;
    scanf("%d", &n);
    double a, b, c, d, e;
    for(i = 0; i < n; i++){
        scanf("%lf %lf %lf %lf %lf", &a, &b, &c, &d, &e);
        double tmp = a + b + c + d + e * 110.0 / 900.0;
        if(MAX < tmp){
            MAX = tmp;
        }
    }
    printf("%.10lf\n", MAX);
} 