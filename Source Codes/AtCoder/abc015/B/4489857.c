#include <stdio.h>

int main(void){
  int N;
  scanf("%d",&N);

  int cnt = 0;
  int sum = 0;
  int a;
  for(int i = 0;i < N;i++){
    scanf("%d",&a);
    if(a) cnt++;
    sum += a;
  }

  printf("%d\n",(sum+cnt-1)/cnt);

  return 0;
} 