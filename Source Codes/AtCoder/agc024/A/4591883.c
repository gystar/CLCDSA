#include<stdio.h>

int main(){
    long long int A,B,C,K;
    scanf("%lld",&A);
    scanf("%lld",&B);
    scanf("%lld",&C);
    scanf("%lld",&K);

    if(K%2==0){
        printf("%lld",A-B);
    }

    if(K%2 == 1){
        printf("%lld",B-A);
    }

return 0;

} 