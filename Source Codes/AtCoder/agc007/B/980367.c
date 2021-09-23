#include<stdio.h>

int ip[20000], a[20000], b[20000];

int main(void){
    int i, N, p;
    
    scanf("%d", &N);
    
    for(i = 0; i < N ; i++){
        scanf("%d", &p);
        ip[p - 1] = i;
    }
    
    for(i = 0; i < N; i++){
        a[i] = b[N - i - 1] = 20000 * i + 1;
    }
    
    for(i = 0; i < N; i++) a[i] += ip[i];
    
    
    printf("%ld", a[0]);
    for(i = 1; i < N; i++) printf(" %ld", a[i]);
    printf("\n%ld", b[0]);
    for(i = 1; i < N; i++) printf(" %ld", b[i]);
    printf("\n");

    return 0;
} 