#include<stdio.h>
#include<stdlib.h>

int cmp(const int *a,const int *b){
  return *a-*b;
}
int main(){
  int n,l[222];
  scanf("%d",&n);
  n*=2;
  for(int i=0;i<n;i++){
    scanf("%d",&l[i]);
  }
  qsort(l,n,4,cmp);
  int sum=0;
  for(int i=0;i<n;i+=2){
    sum+=l[i];
  }
  printf("%d",sum);
} 