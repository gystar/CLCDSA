#include <stdio.h>

int main(void){
  int N,a;
  int max,min;

  scanf("%d",&N);
  scanf("%d",&a);
  max = min = a;
  for(int i = 1;i < N;i++){
    scanf("%d",&a);
    if(max < a) max = a;
    if(min > a) min = a;
  }

  printf("%d\n",max-min);


  return 0;
} 