#include <stdio.h>
int main(void){
  int n;
  scanf("%d",&n);
  int l,r,i,sum=0;
  for(i=0;i<n;i++){
    scanf("%d%d",&l,&r);
    sum+=r-l+1;
  }
  if(sum>=100000) sum=100000;
  printf("%d",sum);
  return 0;
} 