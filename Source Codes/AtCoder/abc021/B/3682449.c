#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
  int N,a,b,K,P;
  int Ks[110]={};
  scanf("%d%d%d%d",&N,&a,&b,&K);
  for(int i=0; i<K; i++) {
    scanf("%d",&P);
    if(P==a||P==b||Ks[P]==1) {
      puts("NO");
      return 0;
    }
    Ks[P]++;
  }
  puts("YES");
  return 0;
} 