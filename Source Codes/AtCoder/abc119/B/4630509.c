#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void) {
  int i, N;
  double x, T=0;
  char s[10];
  scanf("%d", &N);
  for (i=0;i<N;i++){
    scanf("%lf %s", &x, s);
    if (strcmp(s, "BTC") == 0){
      T += 380000 * x;
    } else {
      T += x;
    }
  }
  printf("%lf\n", T);
  return 0;
} 