#include <stdio.h>
#include <math.h>
int main(void){
    int n,x[100],y[100],i,j;
    double max=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d%d",&x[i],&y[i]);
    }
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(sqrt((x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j]))>max) max=sqrt((x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j]));
        }
    }
    printf("%f\n",max);
    return 0;
} 