#include<stdio.h>
#include<stdlib.h>
int cmp(const int *a,const int *b){
  return *b-*a;
}
int main(){
  int n,k,i,r[111];
  scanf("%d%d",&n,&k);
  for(i=0;i<n;i++) scanf("%d",&r[i]);
  qsort(r,n,4,cmp);
  double c=0;
  for(i=k;i>0;i--){
    c=(c+r[i-1])/2;
  }
  printf("%lf",c);
} 