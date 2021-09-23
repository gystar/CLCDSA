#include <stdio.h>

int main(void){
  int N;
  scanf("%d",&N);

  int a;
  int ans = 0;
  for(int i = 0;i < N;i++){
    scanf("%d",&a);
    while(1){
      if(a == 1) break;
      if(a%2 == 0 || a%3 == 2){
        a--;
        ans++;
        continue;
      }
      break;
    }
  }

  printf("%d\n",ans);

  return 0;
} 