#include <stdio.h>
int main(void){
    double ans=0,a,b,c,d,e;
    int n;
    scanf("%d",&n);
    for (int i=0; i<n; i++){
        scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&e);
        if (ans<a+b+c+d+e/900*110){
            ans=a+b+c+d+e/900*110;
        }
    }
    printf("%.8f\n",ans);
    return 0;
} 