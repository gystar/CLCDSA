#include<stdio.h>
#include<stdlib.h>
#include<math.h>

typedef long long int int64;

#define MAX(a,b) ((a)>(b)?(a):(b))
#define MIN(a,b) ((a)<(b)?(a):(b))
#define ABS(a) ((a)>(0)?(a):-(a))

void run(void){
  int n,m;
  scanf("%d%d",&n,&m);
  int ans=(1<<m)*(100*(n-m)+1900*m);
  printf("%d\n",ans);
}

int main(void){
  run();
  return 0;
} 