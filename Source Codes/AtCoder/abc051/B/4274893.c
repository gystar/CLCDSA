#include <stdio.h>

int main(void){
  int K,S;
  scanf("%d%d",&K,&S);

  int cnt = 0;
  for(int i = 0;i <= K;i++){
    for(int j = i;j <= K;j++){
      int k = S-i-j;
      if(0 <= k && k <= K && k >= j){
          if(i != j && j != k && k != i) cnt += 6;
          else if(i == j && j == k && k == i) cnt++;
          else cnt += 3;
      }
    }
  }

  printf("%d\n",cnt);
  return 0;
} 