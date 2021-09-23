#include <stdio.h>
int main(void){
    int n,a,i,d,min=100000000;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        d=0;
        scanf("%d",&a);
        while(a%2==0){
            a/=2;
            d++;
        }
        if(d<min) min=d;
    }
    printf("%d\n",min);
    return 0;
} 