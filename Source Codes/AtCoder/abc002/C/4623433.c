#include <stdio.h>
#include <stdlib.h>

int main(){
    int xa,ya,xb,yb,xc,yc;
    scanf("%d %d %d %d %d %d",&xa,&ya,&xb,&yb,&xc,&yc);
    int a,b,c,d;
    double S;
    a = xb - xa;
    b = yb - ya;
    c = xc - xa;
    d = yc - ya;
    S = abs(a * d - b * c) * 0.5;
    printf("%.1f\n",S);
    return 0;
} 