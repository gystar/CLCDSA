#include <stdio.h>
#include <math.h>
int main(void){
    float h,m,k;
    scanf("%f%f",&h,&m);
    h = fmod(h,12.0)*5+(m/12);
    k = fabs(h-m)*6;
    if(k<360-k)
        printf("%lf\n",k);
    else
        printf("%lf\n",360-k);
} 