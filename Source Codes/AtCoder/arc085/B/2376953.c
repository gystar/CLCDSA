#include<stdio.h>
#include<stdlib.h>
#include<math.h>

typedef long long int int64;

#define MAX(a,b) ((a)>(b)?(a):(b))
#define MIN(a,b) ((a)<(b)?(a):(b))
#define ABS(a) ((a)>(0)?(a):-(a))

void run(void){
  int n,z,w;
  scanf("%d%d%d",&n,&z,&w);
  int i;
  int a[2000];
  for(i=0;i<n;i++) scanf("%d",a+i);
  if(n==1){
    printf("%d\n",ABS(a[0]-w));
    return;
  }
  int ans=MAX(ABS(a[n-1]-w),ABS(a[n-1]-a[n-2]));
  printf("%d\n",ans);
  return;
}

int main(void){
  run();
  return 0;
} 