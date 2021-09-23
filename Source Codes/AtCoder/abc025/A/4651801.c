#include<stdio.h>
int main(){
    char S[5];
    int N;
    scanf("%s%d",S,&N);
    printf("%c%c\n",S[(N-1)/5],S[(N-1)%5]);
    return 0;
} 