#include <stdio.h>

int main(void){
  int N;
  scanf("%d",&N);

  int dist;
  int maxdist = 0;
  int num;
  for(int i = 2;i <= N;i++){
    printf("? 1 %d\n",i);
    fflush(stdout);
    scanf("%d",&dist);
    if(maxdist < dist){
      maxdist = dist;
      num = i;
    }
  }

  int ans = maxdist;
  for(int i = 2;i <= N;i++){
    if(i == num) continue;
    printf("? %d %d\n",num,i);
    fflush(stdout);
    scanf("%d",&dist);
    if(ans < dist) ans = dist;
  }

  printf("! %d\n",ans);
  fflush(stdout);
  return 0;
} 