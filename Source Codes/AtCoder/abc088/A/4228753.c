#include<stdio.h>
int main(void){
    int N,A;
    scanf("%d",&N);
    scanf("%d",&A);
    if((N%500) <= A) printf("Yes\n");
    else printf("No\n");
    return 0;
} 