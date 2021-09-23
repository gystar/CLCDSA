#include <stdio.h>
int main(){
  int N, K, x, sum=0;
  scanf("%d%d", &N, &K);
  for (int i=0; i<N ;i++){
    scanf("%d",&x);
    if (K-x > x){
      sum += 2 * x;
    }
    else{
      sum += 2 * (K - x);
    }
  }
  printf("%d",sum);
  return 0;
} 