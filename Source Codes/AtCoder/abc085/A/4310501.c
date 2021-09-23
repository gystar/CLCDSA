#include <stdio.h>
int main(void){
    char S[10] = {"0"};
    scanf("%s", S);
    S[3] = '8';
    printf("%s\n", S);
    return 0;
} 