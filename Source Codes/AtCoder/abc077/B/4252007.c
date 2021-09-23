#include <stdio.h>
#include <math.h>
int main(void){
    long N = 0;
    scanf("%lld", &N);
    long max = 0;
    for(int i = 1; i <= sqrt(N); i++){
        long s = i * i;
        if(s <= N){
            if(max < s){
                max = s;
            }
        }
    }
    printf("%ld\n", max);
    return 0;
} 