#include<stdio.h>
#include<stdlib.h>
int cmp(const int *a,const int *b){
  return *a-*b;
}
int main(){
  int a[5],ans;
  scanf("%d%d%d",&a[0],&a[1],&a[2]);
  qsort(a,3,4,cmp);
  if(a[0]%2==a[1]%2){
    ans=(a[1]-a[0])/2+a[2]-a[1];
  }
  else {
    ans=(a[2]-a[0])/2+(a[2]-a[1])/2+2;
  }
  printf("%d",ans);
} 