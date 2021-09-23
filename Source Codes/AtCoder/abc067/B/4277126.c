#include<stdio.h>
#include<stdlib.h>

int cmp(const int *a,const int *b){
  return *b-*a;
}
int main(){
  int k,n,l[50],i,sum=0;
  scanf("%d%d",&n,&k);
  for(i=0;i<n;i++) scanf("%d",&l[i]);
  qsort(l,n,sizeof(int),cmp);
  for(i=0;i<k;i++) sum+=l[i];
  printf("%d",sum);
} 