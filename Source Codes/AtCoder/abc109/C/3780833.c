#include <stdio.h>
#include <stdlib.h>

int euclid(int a, int b){
  if(a < b){
    int tmp = a;
    a = b;
    b = tmp;
  }
  int r = a % b;
  if(r < 0){
    r += b;
  }
  while(r != 0){
    a = b;
    b = r;
    r = a % b;
    if(r < 0){
      r += b;
    }
  }
  return b;
}

int main(){
  int N, X;
  int x[100010] = {};

  scanf("%d %d", &N, &X);
  for(int i = 0; i < N; i++){
    scanf("%d", &x[i]);
  }

  int D = abs(x[0] - X);
  for(int i = 1; i < N; i++){
    D = euclid(D, abs(x[i] - X));
  }
  printf("%d\n", D);

  return 0;
} 