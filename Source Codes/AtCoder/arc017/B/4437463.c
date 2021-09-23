#include<stdio.h>
#include<stdlib.h>

void run(void){
  int n,k;
  scanf("%d%d",&n,&k);
  int *a=(int *)calloc(n,sizeof(int));
  int i;
  for(i=0;i<n;i++) scanf("%d",a+i);
  int ans=0;
  i=0;
  while(i<n){
    int j=i+1;
    while(j<n && a[j-1]<a[j]) j++;
    if(j-i-k+1>0) ans+=j-i-k+1;
    i=j;
  }
  printf("%d\n",ans);
}

int main(void){
  run();
  return 0;
} 