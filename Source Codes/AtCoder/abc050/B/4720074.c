#include <stdio.h>

int main (void){

    int n;
    int t[101];
    int m;
    int p[101];
    int x[101];
    int sum = 0;
    int i;

    scanf("%d" ,&n);

    for( i = 0; i < n; i++) {

        scanf("%d" ,&t[i]);
        sum = sum + t[i];
    }

    scanf("%d" ,&m);

    for( i = 0; i < m; i++) {
        
        scanf("%d %d" ,&p[i] ,&x[i]);
    }

    for( i = 0; i < m; i++) {
        
        printf("%d\n" ,sum - t[p[i] - 1] + x[i]);
    }
    
    return 0;
    
} 