#include<stdio.h>

int main(){
  int N, f, d;
  scanf("%d", &N);
  d = N;
  
  do{
    f += N%10;
    N /= 10;
  }while(N != 0);
  
  if(d%f == 0){
    printf("Yes\n");
  } else {
    printf("No\n");
  }
  
  return 0;
} 