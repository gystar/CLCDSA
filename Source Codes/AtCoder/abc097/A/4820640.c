#include <stdio.h>
#include <stdlib.h>

int main(void){
    int a, b, c, d;
    scanf("%d%d%d%d",&a, &b, &c, &d);
    printf("%s\n", (abs(c-a) <= d) || ((abs(b-a) <= d) && (abs(c-b) <= d)) ? "Yes" : "No");
    return 0; 
} 