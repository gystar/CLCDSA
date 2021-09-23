#include <stdio.h>

int main(){
  double total = 0;
  int N, i;

  scanf("%d", &N);

  for(i = 0; i < N; i++){
    double x;
    scanf("%lf", &x);
    char u[3] = {};
    scanf("%s", &u);
    
    if(u[0] == 'J'){
      total += x;
    }
    if(u[0] == 'B'){
      total += x * 380000.0;
    }
  }

  printf("%lf\n", total);

  return 0;
} 