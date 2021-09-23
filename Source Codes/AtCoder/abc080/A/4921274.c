#include<stdio.h>
int main(){
    int N,A,B,D;
    scanf("%d %d %d",&N,&A,&B);
    D=N*A;
    if(D<=B) printf("%d\n",D);
    else printf("%d\n",B);


    return 0;
} 