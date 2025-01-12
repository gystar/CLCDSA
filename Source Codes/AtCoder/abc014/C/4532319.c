#include <stdio.h>
#define limit 1000001

int cnt[limit];

int main(void){
  int N;
  scanf("%d",&N);

  for(int i = 0;i < limit;i++) cnt[i] = 0;

  int a,b;
  for(int i = 0;i < N;i++){
    scanf("%d%d",&a,&b);
    cnt[a]++;
    cnt[b+1]--;
  }

  int MAX = cnt[0];

  for(int i = 1;i < limit;i++){
    cnt[i] += cnt[i-1];
    if(MAX < cnt[i]){
      MAX = cnt[i];
    }
  }

  printf("%d\n",MAX);

  return 0;
} 