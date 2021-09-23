#include<stdio.h>
#include<stdlib.h>

int main(){
   long long i,j;
   int c=0;
   scanf("%lld%lld",&i,&j);
   while (i<=j) {
    c++;
    i*=2;
   }
   printf("%d\n",c);
    return 0;
} 