#include<stdio.h>

int main(void){
    long long int i, N, T, A, t, a, rt, ra, r;
    
    scanf("%ld", &N);
    
    scanf("%ld", &t);
    scanf("%ld", &a);
    
    for(i = 1; i < N; i++){
        scanf("%ld", &T);
        scanf("%ld", &A);
        
        rt = (t + T - 1) / T;
        ra = (a + A - 1) / A;
        
        if(rt > ra) r = rt;
        else r = ra;
        
        t = r * T;
        a = r * A;
    }
    
    printf("%lld\n", t + a);
    
    return 0;
} 