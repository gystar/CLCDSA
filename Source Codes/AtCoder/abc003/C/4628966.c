#include <stdio.h>
#include <stdlib.h>

int compare_int(const void *a,const void *b){
  return *(long*)a-*(long*)b;
}

int main(void){
  int N,K;
  scanf("%d%d",&N,&K);

  int R[N];
  for(int i = 0;i < N;i++){
    scanf("%d",&R[i]);
  }

  qsort(R,N,sizeof(int),compare_int);

  double ans = 0;
  for(int i = N-K;i < N;i++){
    ans = (ans+R[i])/2;
  }

  printf("%.9lf\n",ans);

  return 0;
} 