#include<stdio.h>
#include<stdlib.h>

int cmp(const void *a,const void *b){
  return *(int*)b - *(int*)a;
}


int main(void){
  int n,i;
  scanf("%d",&n);
  int a[n],flag=1;
  for(i=0;i<n;i++){
    scanf("%d",&a[i]);
  }
  qsort(a,n,sizeof(int),cmp);
  for(i=0;;i++){
    if(a[i]!=a[i+1]) break;
  }
  printf("%d\n",a[i+1]);
  return 0;
} 