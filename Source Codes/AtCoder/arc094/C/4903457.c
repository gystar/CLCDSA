#include<stdio.h>
int min2(int a, int b){return a>b?b:a;}
int n, i;
int a, b, min;
long sum;
char is;
int main(void){
  min = 1000000000;
  scanf("%d", &n);
  for(i=0; i<n; i++){
    scanf("%d%d", &a, &b);
    sum += a;
    if(a>b){min=min2(min, b);}
    if(a!=b){is=1;}
  }
  if(is){
    printf("%ld\n", sum-min);
  }else{
    puts("0");
  }
} 