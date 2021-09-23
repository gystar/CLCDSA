#include <stdio.h>

int main(void){
    
    int x,sq,po,i,max;
    max=0;
    scanf("%d",&x);
    
    for(i=1; i*i<=x; i++){
        sq=i*i;
        po=0;
        if(sq*i<=x){
            po=sq;
            while(po*i<=x && i!=1){
                po*=i;
            }
        }
        if(max<sq)
            max=sq;
        if(max<po)
            max=po;
    }
    printf("%d",max);
} 