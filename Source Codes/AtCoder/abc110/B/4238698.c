#include <stdio.h>

int main(void){
  int N,M,X,Y;
  scanf("%d%d%d%d",&N,&M,&X,&Y);
  int x,y;
  int max = -101;
  int min = 101;

  for(int i = 0;i < N;i++){
    scanf("%d",&x);
    if(max < x){
      max = x;
    }
  }
  for(int i = 0;i < M;i++){
    scanf("%d",&y);
    if(min > y){
      min = y;
    }
  }

  for(int Z = min;Z > max;Z--){
    if(X == Z || Y == Z) continue;
    if(max < min && Z > max && X < Z && Z <= Y){
      printf("No War\n");
      return 0;
    }
  }

  printf("War\n");
  return 0;
} 