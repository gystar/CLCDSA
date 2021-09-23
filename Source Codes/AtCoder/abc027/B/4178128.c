#include<stdio.h>

int main(){
  int N, a[100], i, sum = 0, p, count = 0, j = 0;
  
  scanf("%d", &N);
  for (i = 0; i < N; i++){
    scanf("%d", &a[i]);
    sum += a[i];
  }
  if(sum%N != 0){
    printf("-1\n");
  } else {
    p = sum/N;
    sum = 0;
    for (i = 0; i < N; i++){
      sum += a[i];
      j++;
      if(sum != p*j){
        count++;
      } else {
        sum = 0;
        j = 0;
      }
    }
    
    printf("%d\n", count);
  }
  
  return 0;
} 