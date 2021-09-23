#include <stdio.h>

int main(void){
  int N,a,b;
  scanf("%d%d%d",&N,&a,&b);

  int flag[N];
  for(int i = 0;i < N;i++) flag[i] = 0;
  flag[a-1]++; flag[b-1]++;

  int K,p;
  int ans = 0;
  scanf("%d",&K);
  for(int i = 0;i < K;i++){
    scanf("%d",&p);
    if(flag[p-1]) ans = 1;
    flag[p-1]++;
  }

  if(ans) printf("NO\n");
  else printf("YES\n");
  return 0;
} 