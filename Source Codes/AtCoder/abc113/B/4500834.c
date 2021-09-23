#include <stdio.h>
#include <math.h>
int main(void){
    int N, T, A;
    scanf("%d", &N);
    scanf("%d %d", &T, &A);
    int H[N];
    double min = 10000;
    int min_n = 0;
    for (int i = 0; i < N; i++){
        scanf("%d", &H[i]);
        if (min > fabs(A - (T - H[i] * 0.006))) {
            min = fabs(A - (T - H[i] * 0.006));
            min_n = i+1;
        }
    }
    printf("%d\n", min_n);
    return 0; 
} 