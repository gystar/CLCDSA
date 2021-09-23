#include <stdio.h>
#include <stdlib.h>

int min(int a,int b){
  if(a < b){
    return a;
  }
  return b;
}

int main(void){
  int N;
  int ans = 1 << 29;
  scanf("%d",&N);

  for(int i = 1;i*i <= N;i++){
    int j = N/i;
    ans = min(ans,abs(i-j)+N-i*j);
  }
  printf("%d\n",ans);

  return 0;
} 