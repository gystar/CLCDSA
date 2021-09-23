#include <stdio.h>

int main(void){
    int N;
    int sum = 0;
    scanf("%d", &N);
    int n = N;
    for (int i= 1.0e9; i > 0; i /= 10){
        sum += n / i;
        n = n % i;
    }
    printf("%s\n", (N % sum == 0) ? "Yes" : "No");
    return 0; 
} 