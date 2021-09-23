#include<stdio.h>

int main (void) {

  int N,T;
  int t[200010];
  int i;

  scanf("%d %d",&N,&T);
  for (i=0;i<N;i++) {
    scanf("%d",&t[i]);
  }

  int sum = 0;
  int tmp = 0;
  for (i=0;i<N;i++) {
    if(t[i]>=tmp){
      sum += T;
    } else {
      sum -= tmp - t[i];
      sum += T;
    }
    tmp = t[i] + T;
  }

  printf("%d\n",sum);

  return 0;
} 