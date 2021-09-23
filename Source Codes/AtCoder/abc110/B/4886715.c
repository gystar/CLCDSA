#include <stdio.h>

int
main(int argc, char argv[])
{
  int N, M, X, Y;
  int x[100], y[100];
  scanf("%d%d%d%d", &N, &M, &X, &Y);
  for(int i = 0; i < N; i++){
    scanf("%d", &x[i]);
  }
  for(int i = 0; i < M; i++){
    scanf("%d", &y[i]);
  }
  
  int x_max = -100; int y_min = 100;
  for(int i = 0; i < N; i++){
    if(x_max < x[i]){
      x_max = x[i];
    }
  }
  for(int i = 0; i < M; i++){
    if(y_min > y[i]){
      y_min = y[i];
    }
  }
  
  for(int i = X + 1; i <= Y; i++){
    if(x_max < i && i <= y_min){
      printf("%s\n", "No War");
      break;
    }
    else if(i == Y){
      printf("%s\n", "War");
    }
  }
  
  return 0;
} 