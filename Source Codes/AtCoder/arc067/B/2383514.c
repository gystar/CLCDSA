#include<stdio.h>
#include<stdlib.h>
#include<math.h>

typedef long long int int64;

#define MAX(a,b) ((a)>(b)?(a):(b))
#define MIN(a,b) ((a)<(b)?(a):(b))
#define ABS(a) ((a)>(0)?(a):-(a))

void run(void){
  int n,a,b;
  scanf("%d%d%d",&n,&a,&b);
  int64 cost=0;
  int now;
  scanf("%d",&now);
  int i;
  for(i=2;i<=n;i++){
    int x;
    scanf("%d",&x);
    int64 ca=(int64)(x-now)*a;
    cost+=ca>=b?b:ca;
    now=x;
  }
  printf("%lld\n",cost);
  return;
}

int main(void){
  run();
  return 0;
} 