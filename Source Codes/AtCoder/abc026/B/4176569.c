#include<stdio.h>
#include<math.h>

int main(){
  int N, R[1000], pm = 0, max = 0, i, d, sum = 0;
  
  scanf("%d", &N);
  for (i = 0; i < N; i++){
    scanf("%d", &R[i]);
  }
  
  do{
    max = 0;
    for (i = 0; i < N; i++){
      if(max < R[i]){
        max = R[i];
        d = i;
      }
    }
    R[d] = 0;
    if(pm%2 == 0){
      sum += max*max;
      pm++;
    } else {
      sum -= max*max;
      pm--;
    }
  } while(max != 0);
  
  printf("%f", (float)sum * M_PI);
  
  return 0;
  
} 