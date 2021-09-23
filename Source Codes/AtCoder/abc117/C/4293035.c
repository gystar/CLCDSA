#include<stdio.h>
#include<stdlib.h>

int cmp(const int *a,const int *b){
  return *a-*b;
}
int main(){
  int n,m,x[100000],y[100000],i,j,t,sum=0;
  scanf("%d%d",&n,&m);
  for(i=0;i<m;i++){
    scanf("%d",&x[i]);
  }
  qsort(x,m,sizeof(int),cmp);
  for(i=0;i<m-1;i++){
    y[i]=x[i+1]-x[i];
  }
  qsort(y,m-1,sizeof(int),cmp);
  for(i=0;i<m-n;i++){
    sum+=y[i];
  }
  printf("%d",sum);
} 