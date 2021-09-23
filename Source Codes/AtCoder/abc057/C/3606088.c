#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    long long n,lim,i,dig=20;
    scanf("%lld",&n);
    lim=sqrt(n);
    for(i=1;i<=lim;i++){
        if(n%i==0){
            if(log10(n/i)<dig){
                dig=log10(n/i);
            }
        }
    }
    printf("%lld",dig+1);
    return 0;
} 