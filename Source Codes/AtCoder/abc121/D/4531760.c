#include <stdio.h>

long long XOR(long long N){
  if(N == -1) return 0;
  if(N%4 == 1) return 1;
  if(N%4 == 2) return 1^N;
  if(N%4 == 3) return 0;
  return N;
}

int main(void){
  long long A,B;
  scanf("%lld%lld",&A,&B);

  printf("%lld\n",XOR(A-1)^XOR(B));

  return 0;
} 