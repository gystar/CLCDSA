#include<stdio.h>
#include<stdlib.h>

typedef long long int int64;

void run(void){
  int n;
  scanf("%d",&n);
  int *a=(int *)malloc(sizeof(int)*n);
  int i;
  for(i=0;i<n;i++) scanf("%d",a+i);
  int64 ans=0;
  int r=0;
  int sum=0;
  for(i=0;i<n;i++){
    while(r<n && (sum&a[r])==0) sum+=a[r++];
    ans+=r-i;
    sum-=a[i];
  }
  printf("%lld\n",ans);
}

int main(void){
  run();
  return 0;
} 