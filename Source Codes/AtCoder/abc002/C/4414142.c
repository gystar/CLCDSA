#include <stdio.h>
#include <stdlib.h>
int main(void){
// Your code here!
    double a[6];
    int i;
    float ans;
    for(i=0;i<6;i++) scanf("%lf",&a[i]);
    a[0] -= a[4];
    a[2] -= a[4];
    a[1] -= a[5];
    a[3] -= a[5];

    ans = fabs((a[0]*a[3]-a[1]*a[2])/2);
    printf("%f",ans);
} 