#include<stdio.h>
int main(void){
    int A,B,C,D;
    scanf("%d %d %d %d",&A,&B,&C,&D);
    int sum = 0;
    if(A<B) sum += A;
    else sum += B;
    if(C<D) sum += C;
    else sum += D;
    printf("%d\n",sum);
    return 0;
} 