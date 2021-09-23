#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(void){
  long long int n, m;
  scanf("%lld %lld",&n,&m);
  if(n==1 && m==1) printf("1\n");
  else if(n==1 || m==1) printf("%lld\n",n*m-2);
  else printf("%lld\n",(n-2)*(m-2));

  return 0;
} 