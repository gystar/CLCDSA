#include <stdio.h>

int main(){
    int N;
    scanf("%d", &N);
    int p[N], most = 0, sum = 0;
    for(int i = 0; i < N; i++){
        scanf("%d", &p[i]);
        if(p[i] > most) most = p[i];
        sum += p[i];
    }
    printf("%d", sum - most/2);
    return 0;
} 