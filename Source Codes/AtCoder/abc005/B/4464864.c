#include<stdio.h>
#include<stdlib.h>
int cmp(const void *a,const void *b){
  return *(int*)a - *(int*)b;
}

int main(void){
  int n,i;
  scanf("%d",&n);
  int a[n];
  for(i=0;i<n;i++) scanf("%d",&a[i]);
  qsort(a,n,sizeof(int),cmp);
  printf("%d\n",a[0]);
  return 0;
} 