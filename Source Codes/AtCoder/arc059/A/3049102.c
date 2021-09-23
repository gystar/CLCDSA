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
  int a[100];
  int i;
  for(i=0;i<n;i++) scanf("%d",a+i);
  int min=200*200*100;
  int x;
  for(x=-100;x<=100;x++){
    int local=0;
    for(i=0;i<n;i++) local+=(x-a[i])*(x-a[i]);
    min=MIN(min,local);
  }
  printf("%d\n",min);
}

int main(void){
  run();
  return 0;
} 