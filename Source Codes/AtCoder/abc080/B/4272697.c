#include <stdio.h>
int main(){
  int N, n, a=0;
  scanf("%d", &N);
  n=N;
  while (n>0){
    a = a + n % 10;
    n /= 10;
  }
  if (N%a==0){
    printf("Yes\n");
  }
  else{
    printf("No\n");
  }
  return 0;
} 