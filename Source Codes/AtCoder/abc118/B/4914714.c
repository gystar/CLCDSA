#include <stdio.h>

int main(){
  int n,m;
  scanf("%d %d\n",&n,&m);
  int food[m];
  int num;
  int like;
  for(int i = 0; i < m; ++i) food[i] = 0;
  for(int i = 0; i < n; ++i){
    scanf("%d",&num);
    for(int j = 0; j < num; ++j){
      scanf("%d",&like);
      food[like-1]++;
    }
    scanf("\n");
  }
  int like_num = 0;
  for(int i = 0; i < m; ++i) if(food[i] == n) like_num++;
  printf("%d\n",like_num);
  return 0;
} 