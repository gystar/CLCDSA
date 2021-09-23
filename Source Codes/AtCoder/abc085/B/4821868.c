#include <stdio.h>

#define MAXNUM 100
#define MAXDI 100

int main(){
  int n, d[MAXNUM],  count = 0;
  int num[MAXDI] = {};
  int i;
  scanf("%d", &n);
  if( n < 0 || MAXNUM < n)
    return 1;

  for(i = 0;i < n; i++){
    scanf("%d", &d[i]);
      if( d[i] < 0 || MAXDI < d[i])
        return 1;
  }
  for(i = 0; i < n; i++){
    num[d[i]-1] += 1;
  }
  for(i = 0; i < MAXDI; i++){
    if(num[i])
      count += 1;
  }

  printf("%d\n",count);
  return 0;
} 