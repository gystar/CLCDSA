#include<stdio.h>
#include<stdlib.h>

int cmp(const int *a,const int *b){
  return *a-*b;
}
int main(){
  int n,k,h[100000],i,d;
  scanf("%d%d",&n,&k);
  for(i=0;i<n;i++) scanf("%d",&h[i]);
  qsort(h,n,sizeof(int),cmp);
  d=h[k-1]-h[0];
  for(i=k;i<n;i++){
    if(d>h[i]-h[i-k+1]) d=h[i]-h[i-k+1];
  }
  printf("%d",d);
} 