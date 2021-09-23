#include <stdio.h>
#include <stdlib.h>

int main(void){
    long long x,y;
    scanf("%lld%lld",&x,&y);
    if (x==0 || y==0){
        if (x>y){
            printf("%lld\n",llabs(y-x)+1);
        } else {
            printf ("%lld\n",llabs(y-x));
        }
            } else if (x*y>0){
        if(x<y){
            printf("%lld\n",y-x);
        } else {
            printf("%lld\n",x-y+2);
        }
    } else {
            printf("%lld\n",llabs(llabs(x)-llabs(y))+1);
    }
	return 0 ;
} 