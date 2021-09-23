#include <stdio.h>
#include <stdlib.h>
int ucm(const void *a,const void *b){
  return *(int *)a-*(int *)b;
}
int main(){
  int n,m,i;
  scanf("%d%d",&n,&m);
  int x[n+1],y[m+1];
  scanf("%d%d",&x[0],&y[0]);
  for(i=1;i<n+1;i++)scanf("%d",&x[i]);
  for(i=1;i<m+1;i++)scanf("%d",&y[i]);
  qsort(x,n+1,sizeof(int),ucm);
  qsort(y,m+1,sizeof(int),ucm);
  if(x[n]<y[0])printf("No War");
  else printf("War");
} 