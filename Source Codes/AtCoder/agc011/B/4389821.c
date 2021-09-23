#include<stdio.h>
#include<stdlib.h>

typedef long long int int64;

int cmp(const void *a,const void *b){
  return *(int *)a-*(int *)b;
}

void run(void){
  int n;
  scanf("%d",&n);
  int *a=(int *)calloc(n,sizeof(int));
  int i;
  for(i=0;i<n;i++) scanf("%d",a+i);
  qsort(a,n,sizeof(int),cmp);
  i=0;
  int64 sum=0;
  while(i<n){
    sum+=a[i];
    int j=i+1;
    while(j<n && 2*sum>=a[j]) sum+=a[j++];
    if(j>=n){
      printf("%d\n",n-i);
    }
    i=j;
  }
}

int main(void){
  run();
  return 0;
} 