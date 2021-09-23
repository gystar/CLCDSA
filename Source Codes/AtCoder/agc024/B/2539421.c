#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
int p[200000], ans[200001];

int main(void){
  int n, i, max=0;
  scanf("%d",&n);
  for(i=0;i<=n;i++) ans[i]=0;
  for(i=0;i<n;i++){
    scanf("%d",&p[i]);
    ans[p[i]] = ans[p[i]-1]+1;
    if(max<ans[p[i]]) max = ans[p[i]];
  }
  printf("%d\n",n-max);
  return 0;
} 