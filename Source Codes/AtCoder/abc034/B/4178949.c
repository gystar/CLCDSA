#include<stdio.h>

int main(){
  int n, c;
  scanf("%d", &n);
  if(n%2 == 0){
    c = n - 1;
  } else {
    c = n + 1;
  }
  
  printf("%d\n", c);
  
  return 0;
} 