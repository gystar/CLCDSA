#include <stdio.h>
#include <stdlib.h>
int compare_int(const void *a, const void *b){return *(int*)b - *(int*)a;}

int main(){
  int N,i,L[200],ans=0;
  scanf("%d",&N);
  for(i=0;i<2*N;i++)scanf("%d",&L[i]);
  qsort(L, 2*N, sizeof(int), compare_int);
  for(i=0;i<N;i++)ans+=L[i*2+1];
  printf("%d\n",ans);
} 