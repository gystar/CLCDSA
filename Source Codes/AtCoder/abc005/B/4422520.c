#include <stdio.h>
int main(void){
    int a,b,n,i;
    a = 100;
    scanf("%d",&n);
    for(i=0;i<n;i++){
         scanf("%d",&b);
         if(a > b){
              a = b;
         }
    }
    printf("%d\n",a);
} 