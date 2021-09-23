#include <stdio.h>

int main(void){
  int N,cnt,cnt8 = 0;
  scanf("%d",&N);
  
  int i,j;
  for(i = 1;i <= N; i += 2){
    cnt = 0;
    for(j = 1;j <= i; j += 2){
      if(!(i % j))	cnt++;
    }
    if(cnt == 8) ++cnt8;
  }
  printf("%d\n",cnt8);
  return 0;
} 