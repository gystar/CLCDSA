#include<stdio.h>
#include<stdlib.h>
#include<math.h>

typedef long long int int64;

#define MAX(a,b) ((a)>(b)?(a):(b))
#define MIN(a,b) ((a)<(b)?(a):(b))
#define ABS(a) ((a)>(0)?(a):-(a))

void run(void){
  int n;
  scanf("%d",&n);
  putchar('1');
  int i;
  for(i=1;i<n;i++) putchar('0');
  printf("7\n");
  return;
}

int main(void){
  run();
  return 0;
} 