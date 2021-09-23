#include <stdio.h>

int N,K;
int data[5][5];
int flag = 0;

void dfs(int depth,int res){
  if(depth == N){
    if(!res) flag = 1;
    return;
  }
  for(int i = 0;i < K;i++)
    dfs(depth+1,res^data[depth][i]); 
}


int main(void){
  scanf("%d%d",&N,&K);

  for(int i = 0;i < N;i++){
    for(int j = 0;j < K;j++){
      scanf("%d",&data[i][j]);
    }
  }

  dfs(0,0);

  if(flag) printf("Found\n");
  else printf("Nothing\n");

  return 0;
} 