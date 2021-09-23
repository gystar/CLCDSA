#include <stdio.h>

int main(void){
  int N;
  scanf("%d",&N);
  long ans = 0;
  long r,l;

  for(int i = 0;i < N;i++){
    scanf("%ld%ld",&r,&l);
    ans += l-r+1;
  }
  printf("%ld\n",ans);

  return 0;
} 