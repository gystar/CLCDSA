#include <stdio.h>
#include <stdlib.h>

int compare_int(const void *a, const void *b)
{
    return *(int*)b - *(int*)a;
}

int main(){
  int i,N,K,R[101];
  double ans=0;
  scanf("%d %d",&N,&K);
  for(i=0;i<N;i++){
    scanf("%d",&R[i]);
  }
  qsort(R, N, sizeof(int), compare_int);
  for(i=K-1;i>=0;i--){
    ans=(ans+(double)R[i])/2.0;
  }
  printf("%f\n",ans);
} 