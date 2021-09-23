#include <stdio.h>

int main(){
  int N, T, ans = 100, i;
  scanf("%d", &N);
  for(i = 0; i < N; i++){
	scanf("%d", &T);
    if(T < ans){
      ans = T;
    }
  }
  printf("%d\n", ans);
  return 0;
} 