#include<stdio.h>
#include<stdlib.h>
#include<math.h>

typedef long long int int64;

#define MAX(a,b) ((a)>(b)?(a):(b))
#define MIN(a,b) ((a)<(b)?(a):(b))
#define ABS(a) ((a)>(0)?(a):-(a))

void run(void){
  int h,w;
  scanf("%d%d",&h,&w);
  int ans=h*(w-1)+(h-1)*w;
  printf("%d\n",ans);
}

int main(void){
  run();
  return 0;
} 