#include <stdio.h>
int main(void){
    int n = 0;
    int a[10] = {0};
    scanf("%ld", &n);
    for(int i = 0; i < n; i++){
        scanf("%ld", &a[i]);
    }

    int total = 0;

    for(int i = 0; i < n; i++){
        if(a[i] % 2 == 1){
            total += 0;
            if(a[i] % 3 != 2){
                total += 0;
            }else {
                total += 2;
            }
        }else {
            total += 1;
            a[i] -= 1;
            if(a[i] % 3 != 2){
                total += 0;
            }else {
                total += 2;
            }
        }
    }
    printf("%d\n", total);
    return 0;
} 