#include <stdio.h>

void func(int a[], int num, int* sum, int* min){
    int m = 1000;
    for(int i = 0; i < num; i++){
        if(m > a[i]) m = a[i];
        *sum += a[i];
    }
    *min = m;
}

int main(void){
    int N, X;
    scanf("%d %d", &N, &X);
    int m[N];
    for(int i = 0; i < N; i++){
        scanf("%d", &m[i]);
    }
    int sum = 0;
    int min;
    func(m, N, &sum, &min);
    int ans = N + (X - sum) / min;
    printf("%d\n", ans);
    
    return 0; 
} 