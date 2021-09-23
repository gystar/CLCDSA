#include<stdio.h>

int main(){
    double n,k,p,q;
    scanf("%lf%lf",&n,&k);
    p=6*(n-k)*(k-1)+3*(n-1)+1;
    q=n*n*n;
    printf("%.12lf\n",p/q);
    return 0;
} 