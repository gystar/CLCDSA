#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

int main(void) {
  int n,x,ans=0;
  int binary[1000] = {};
  int as[21];
  scanf("%d%d",&n,&x);
  for(int i=0; i<n; i++) {
      scanf("%d",&as[i]);
  }
  int j=0;
  while(x>0) {
    binary[j] = x%2;
    x = x / 2;
    j++;
  }
  for(int i=0; i<n; i++) {
    if(binary[i]!=0) ans+=as[i];
  }
  printf("%d\n",ans);
  return 0;
} 