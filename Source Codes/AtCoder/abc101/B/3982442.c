#include <stdio.h>

int sumDigit(int n){
  int sum = 0;
  while(n > 0){
    sum += n % 10;
    n /= 10;
  }
  return sum;
}

int main(void){
  int n;
  scanf("%d", &n);
  int sum = sumDigit(n);
  if(n % sum == 0) printf("Yes\n");
  else printf("No\n");
  return 0;
} 