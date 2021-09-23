#include <stdio.h>

int main(){
    int n, x;
    scanf("%d%d", &n,&x);
    if (n/2>=x) {
        printf("%d", x-1);
    }else{
        printf("%d", n-x);
    }
} 