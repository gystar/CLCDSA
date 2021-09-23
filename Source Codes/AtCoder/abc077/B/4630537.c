#include <stdio.h>
#include <math.h>
int main(void){
  int n,i,j,max=1;
  scanf("%d",&n);
  for(i=1;i<=n;i++){
    if(i*i<=n&&max<i*i) max=i*i;
    if(i*i>n) break;
  }
  printf("%d\n",max);
  return 0;
} 