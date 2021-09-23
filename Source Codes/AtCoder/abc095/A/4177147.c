#include <stdio.h>

int main(void){
  char S[3];

  scanf("%s",S);
  int ans = 700;

  for(int i = 0;i < 3;i++){
    if(S[i] == 'o')
      ans += 100;
  }

  printf("%d\n",ans);
  return 0;
} 