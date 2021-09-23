#include <stdio.h>

int divisor(int num){
  int count = 0;
  for(int i=1;i<=num;i++){
    if(num%i==0)
      count++;
  }
  return count;
}

int counter(int num){
  int x = 0;
  for(int i=1;i<=num;i++){
    if(i%2==1 && divisor(i)==8){
      x++;
    }
  }
  return x;
}

int main(void){
  int n = 0;
  scanf("%d", &n);
  printf("%d", counter(n));
} 