#include <stdio.h>

int main(void){
    int N, X;
    scanf("%d %d", &N, &X);
    int m[N];
    int sum = 0;
    int min = 1000;
    for(int i = 0; i < N; i++){
        scanf("%d", &m[i]);
        sum += m[i];
        if(min > m[i]) min = m[i];
    }
    
    int ans = N + (X - sum) / min;
    printf("%d\n", ans);
    
    return 0; 
} 