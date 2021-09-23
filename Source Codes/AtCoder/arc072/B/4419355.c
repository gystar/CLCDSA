#include<stdio.h>

typedef long long int int64;

#define ABS(a) ((a)>(0)?(a):-(a))

void run(void){
  int64 x,y;
  scanf("%lld%lld",&x,&y);
  puts(ABS(x-y)>1?"Alice":"Brown");
}

int main(void){
  run();
  return 0;
} 