#include<stdio.h>
#include<stdlib.h>
#include<math.h>

typedef long long int int64;

#define MAX(a,b) ((a)>(b)?(a):(b))
#define MIN(a,b) ((a)<(b)?(a):(b))
#define ABS(a) ((a)>(0)?(a):-(a))

void run(void){
  int64 x,y;
  scanf("%lld%lld",&x,&y);
  int cnt=0;
  while(x<=y){
    cnt++;
    x*=2;
  }
  printf("%d\n",cnt);
  return;
}

int main(void){
  run();
  return 0;
} 