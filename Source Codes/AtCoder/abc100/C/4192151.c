#include <stdio.h>


int main(void){
    int n, i, count;
    count = 0;
    scanf("%d", &n);
    int a[n];
    for(i = 0 ; i < n ; i++){
        scanf("%d", &a[i]);
        while(a[i] % 2 == 0){
            a[i] /= 2;
            count++;
        }
    }
    printf("%d", count);

    return 0;
} 