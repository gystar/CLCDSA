#include <stdio.h>

int main(){
    int n; scanf("%d",&n);
    int q=n/100;
    if(n<=100*q+10*q+q){
        printf("%d",100*q+10*q+q);
    }else{
        printf("%d",100*(q+1)+10*(q+1)+(q+1));
    }   
    return 0;
} 