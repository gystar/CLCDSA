#include<stdio.h>
#include<stdlib.h>
long GCD(long x, long y){                                                                         
  if(y == 0) return x;
  else return GCD(y, x % y);
}

int main(){
  int N, i;
  long X;
  scanf("%d %ld", &N, &X);

  long x[N];
  for(i = 0; i < N; i++){
    scanf("%ld", &x[i]);
    x[i] = labs(x[i] - X); 
  }

  long gcd = x[0];
  for(i = 1; i < N; i++){
    gcd = GCD(gcd, x[i]);
  }
  
  printf("%ld\n", gcd);

  return 0;
} 