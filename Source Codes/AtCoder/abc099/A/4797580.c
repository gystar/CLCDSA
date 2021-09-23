#include <stdio.h>

int main(void){
    int n;
    scanf("%d", &n);
    printf("%s\n", (n < 1000) ? "ABC" : "ABD");
    return 0; 
} 