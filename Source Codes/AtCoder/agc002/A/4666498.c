#include <stdio.h>
int main(void){
    long long int a,b,n;
    scanf("%lld%lld",&a,&b);
    n=b-a+1;
    if(a<=0 && b>=0){
        printf("Zero\n");
    }
    else if(a>0){
        printf("Positive\n");
    }
    else if(b<0){
        if(n%2==0) printf("Positive\n");
        else printf("Negative\n");
    }
    return 0;
} 