#include <stdio.h>
#include <math.h>
int main(void){
    int n,a,b;
    scanf("%d%d%d",&n,&a,&b);
    double s[n],sum=0,max=0,min=1e9;
    for (int i=0; i<n; i++){
        scanf("%lf",&s[i]);
        sum+=s[i];
        max=fmax(max,s[i]);
        min=fmin(min,s[i]);
    }
    if (max==min){
        printf("-1\n");
        return 0;
    }
    double p=b/(max-min);
    double q=a-(sum*p)/n;
    printf("%.8f %.8f\n",p,q);
    return 0;
} 