#include <stdio.h>

int main(void){
  int N;
  scanf("%d",&N);

  int a,ans = 0;
  int A[100000];
  for(int i = 0;i < 100000;i++) A[i] = 0;
  for(int i = 0;i < N;i++){
    scanf("%d",&a);
    if(A[a-1]) ans++;
    A[a-1]++;
  }

  printf("%d\n",ans);
  return 0;
} 