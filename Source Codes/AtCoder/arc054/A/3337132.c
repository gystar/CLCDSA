#include <stdio.h>
#include <math.h>
int main(void){
    double l,x,y,s,d,p;
    scanf("%lf%lf%lf%lf%lf",&l,&x,&y,&s,&d);
    if (s<=d){
        p=d-s;
    } else {
        p=l-s+d;
    }
    if (x>y){
        printf("%.8f\n",p/(x+y));
    } else if (p/(x+y)<=(l-p)/fabs(x-y)){
        printf("%.8f\n",p/(x+y));
    } else {
        printf("%.8f\n",(l-p)/fabs(x-y));
    }
    return 0;
} 