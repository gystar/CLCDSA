#include <stdio.h>
#include <math.h>
int main(void){
    // Your code here!
    int num[1000],n,x,i,j;
    double g=0.0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&x);
        num[i] = x*x;
    }
    for(i=0;i<n;i++){
        for(j=i;j<n;j++){
            if(num[i]<num[j]){
                x = num[i];
                num[i] = num[j];
                num[j] = x;
            }
        }
    }
    for(i=0;i<n;i++){
        if(i%2==0) g+=num[i];
        else g-=num[i];
    }
    printf("%lf\n",g*3.14159265359);
} 