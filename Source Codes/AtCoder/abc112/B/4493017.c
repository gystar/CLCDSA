#include <stdio.h>

int main(void){
  int N, T, i, j, Ca=0, ir;
  scanf("%d", &N);
  scanf("%d", &T);
  int c[N];
  int t[N];
  for(i=0; i<N; i++){
    scanf("%d", &c[i]);
    scanf("%d", &t[i]);
    if (T < t[i]){
      t[i] = 1000;
      c[i] = 1000;
      Ca = Ca + 1;
    }
    else{
    }
  }
  for (i=0; i < N; i++){
    for (j=1; j<N; j++){
      if (c[i] > c[j]){
        ir = c[i];
        c[i] = c[j];
	c[j] = ir;
      }
      else{
      }
    }
  }
  if (Ca==N){
    printf("TLE");
  }
  else{
    printf("%d", c[0]);
  }
  return 0;
} 