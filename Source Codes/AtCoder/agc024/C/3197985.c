#include<stdio.h>
#include<stdlib.h>

typedef long long int int64;

void run(void){
  int n;
  scanf("%d",&n);
  int *a=(int *)malloc(sizeof(int)*n);
  int i;
  for(i=0;i<n;i++) scanf("%d",a+i);
  if(a[0]!=0){
    printf("-1\n");
    return;
  }
  int zeroIndex=0;
  for(i=1;i<n;i++){
    if(a[i]==0){
      zeroIndex=i;
    } else if(a[i]>i-zeroIndex || a[i-1]<a[i]-1){
      printf("-1\n");
      return;
    }
  }
  int64 ans=0;
  i=n-1;
  while(i>=0){
    int j=i-1;
    while(j>=0 && a[j]+1==a[j+1]) j--;
    ans+=a[i];
    i=j;
  }
  printf("%lld\n",ans);
}

int main(void){
  run();
  return 0;
} 