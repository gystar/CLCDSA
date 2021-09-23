#include <stdio.h>
#include <math.h>
int N,M,a;
int main(void){
    scanf("%d%d",&N,&M);
    a=(1900*M+100*(N-M))*pow(2,M);
    printf("%d\n",a);
} 