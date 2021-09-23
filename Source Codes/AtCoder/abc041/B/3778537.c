#include <stdio.h>

int main(){
  long int A, B, C;
  long int volume;
  scanf("%ld %ld %ld", &A, &B, &C);
  volume = ((A*B)%1000000007)*C%1000000007;
  if(volume < 0){
    volume += 1000000007;
  }
  printf("%ld\n", volume);
  return 0;
} 