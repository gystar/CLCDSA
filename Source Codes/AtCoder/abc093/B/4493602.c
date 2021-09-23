#include <stdio.h>
#include <math.h>
int main(void){
  int a,b,k,i;
  int s[10000],j=0;
  scanf("%d%d%d",&a,&b,&k);
  for(i=a;i<=fmin(b,a+k-1);i++){
    printf("%d\n",i);
  }
  for(i=fmax(b-k+1,a+k);i<=b;i++){
    printf("%d\n",i);
  }
  return 0;
} 