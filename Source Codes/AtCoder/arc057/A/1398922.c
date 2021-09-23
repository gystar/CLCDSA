#include <stdio.h>

int main(){
    long int A,K,cnt=0;
    scanf("%ld %ld",&A,&K);
    while(A<2000000000000){
        if(K==0){
            cnt = 2000000000000 - A;
            break;
        }
        cnt++;
        A+=(1+K*A);
    }
    printf("%ld\n", cnt);
    return 0;
} 