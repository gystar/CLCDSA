#include<stdio.h>
#include<stdlib.h>
#include<math.h>

typedef long long int int64;

#define MAX(a,b) ((a)>(b)?(a):(b))
#define MIN(a,b) ((a)<(b)?(a):(b))
#define ABS(a) ((a)>(0)?(a):-(a))

void run(void){
  int x;
  scanf("%d",&x);
  int n=1;
  while(n*(n+1)/2<x) n++;
  printf("%d\n",n);
}

int main(void){
  run();
  return 0;
} 