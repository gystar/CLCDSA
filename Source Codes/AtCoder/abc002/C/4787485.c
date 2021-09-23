#include <stdio.h>
#include <math.h>
int main(void){
    int x[6],i;
    for(i=0;i<6;i++) scanf("%d",&x[i]);
    printf("%f\n",fabs((x[2]-x[0])*(x[5]-x[1])-(x[3]-x[1])*(x[4]-x[0]))/2);
} 