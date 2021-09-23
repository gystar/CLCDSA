#include<stdio.h>
#include<stdlib.h>

int cmp(const void *a,const void *b){
  return *(int*)b - *(int*)a;
}

int main(void){
  int n,k,i,ans=0;
  scanf("%d %d",&n,&k);
  int a[n];
  for(i=0;i<n;i++){
    scanf("%d",&a[i]);
  }
  qsort(a,n,sizeof(int),cmp);
  for(i=0;i<k;i++){
    ans+=a[i];
  }
  printf("%d\n",ans);
  return 0;
} 