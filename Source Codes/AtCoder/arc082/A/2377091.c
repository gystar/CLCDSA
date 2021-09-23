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
  int *c=(int *)calloc(100000,sizeof(int));
  int i;
  for(i=0;i<n;i++){
    int a;
    scanf("%d",&a);
    c[a]++;
  }
  int max=0;
  for(i=1;i+1<100000;i++){
    max=MAX(max,c[i-1]+c[i]+c[i+1]);
  }
  printf("%d\n",max);
  return;
}

int main(void){
  run();
  return 0;
} 