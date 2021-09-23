#include <stdio.h>
int main(void){
    char N[3];
    scanf("%s", N);
    if((N[0] == N[1] && N[1] < N[2])|| N[0] < N[1]){
            N[0] += 1;
        }
    N[1] = N[0];
    N[2] = N[0];
    printf("%s\n", N);
    return 0; 
} 