#include <stdio.h>
int main(void){
    int a,b,k,i;
    scanf("%d%d%d",&a,&b,&k);
    if(b-a+1>=k*2){
        for(i=0;i<k;i++){
            printf("%d\n",a+i);
        }
        for(i=k-1;i>=0;i--){
            printf("%d\n",b-i);
        }
    }
    else{
        for(i=a;i<=b;i++){
            printf("%d\n",i);
        }
    }
    return 0;
} 