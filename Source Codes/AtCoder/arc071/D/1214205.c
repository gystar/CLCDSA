#include <stdio.h>

#define MOD (1000000007L)



int main(void)
{
    long n;
    scanf("%ld",&n);

    long P1 = 1;
    long P2 = 1;
    long P3 = 2;

    if (n == 1) {
        printf("1\n");
    } else if (n == 2){
        printf("4\n");
    } else {
        for (long i = 3; i < n; i++) {
            const long newP = (P3 + (P3 -  (P2 - P1))%MOD) % MOD;
            P1 = P2;
            P2 = P3;
            P3 = newP;
        }
        printf("%ld\n", (1L + ((n-1L)%MOD) * ((n * (P3 - (P2 - P1)))%MOD + P2)%MOD + MOD)%MOD);
    }

    return 0;
} 