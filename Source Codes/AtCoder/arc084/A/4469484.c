#include<stdio.h>
#include<stdlib.h>

typedef long long int int64;

int cmp(const void *a,const void *b){
  return *(int *)a-*(int *)b;
}

void run(void){
  int n;
  scanf("%d",&n);
  int *a=(int *)calloc(3*n,sizeof(int));
  int i;
  for(i=0;i<3*n;i++) scanf("%d",a+i);
  qsort(a,n,sizeof(int),cmp);
  qsort(a+n,n,sizeof(int),cmp);
  qsort(a+2*n,n,sizeof(int),cmp);
  int64 ans=0;
  int j=0;
  int k=0;
  for(i=0;i<n;i++){
    while(j<n && a[j]<a[n+i]) j++;
    while(k<n && a[n+i]>=a[k+2*n]) k++;
    ans+=(int64)j*(n-k);
  }
  printf("%lld\n",ans);
}

int main(void){
  run();
  return 0;
} 