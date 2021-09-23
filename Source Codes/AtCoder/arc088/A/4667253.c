#include <stdio.h>

int main() {
    unsigned long long X, Y;
    unsigned long long res = 0;

    scanf ("%llu%llu", &X, &Y);
    for (unsigned long long i = X; i<= Y; i+=i){
        res++;
    }

    printf("%llu", res);
} 