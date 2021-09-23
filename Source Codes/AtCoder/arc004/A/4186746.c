#include<stdio.h>
#include<math.h>

int main(){
    int n,i,j;
    int x[100],y[100];
    double max=0,tmp;

    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d %d",&x[i],&y[i]);
    }

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
                tmp = sqrt(pow(x[i]-x[j],2)+pow(y[i]-y[j],2));
            if(max<tmp){
                max = tmp;
            }
        }
    }
    printf("%lf\n",max);
    return 0;
} 