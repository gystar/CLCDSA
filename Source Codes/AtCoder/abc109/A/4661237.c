#include<stdio.h>

int main(void){
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%s\n", (a * b) % 2 == 1 ? "Yes":"No");
    return 0;
} 