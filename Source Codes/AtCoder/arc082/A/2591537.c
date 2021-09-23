#include<stdio.h>

int main(){
  int cnt[100002]={},n,i,a,max=0;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d",&a);
    if(a>1)
      cnt[a-1]++;
    cnt[a]++;
    cnt[a+1]++;
  }
  for(i=0;i<100000;i++){
    if(max<cnt[i])
      max=cnt[i];
  }
  printf("%d\n",max);
} 