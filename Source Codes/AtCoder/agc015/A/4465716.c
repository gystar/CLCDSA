#include <stdio.h>
#include <math.h>
#include <string.h>
int main(void){
  long int n,a,b,i,cnt=0;
  scanf("%ld %ld %ld",&n,&a,&b);
  if(a>b) cnt=0;
  else if(n==1){
    if(a!=b) cnt=0;
    else cnt=1;
  }
  else cnt=(b-a)*(n-2)+1;
  printf("%ld",cnt);
  return 0;
} 