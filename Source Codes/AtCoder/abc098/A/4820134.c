#include <stdio.h>
int max(int a, int b){
    return (a > b) ? a : b;
}
int main(void){
    int A, B;
    scanf("%d%d", &A, &B);
    printf("%d\n", max(A + B, max(A - B, A * B)));
    return 0; 
} 