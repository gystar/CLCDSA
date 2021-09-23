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
  int *a=(int *)malloc(sizeof(int)*(n+1));
  int i;
  for(i=1;i<=n;i++) scanf("%d",a+i);
  int64 ans=a[1]/2;
  a[1]%=2;
  for(i=2;i<=n;i++){
    int c=MIN(a[i-1],a[i]);
    ans+=c;
    a[i]-=c;
    ans+=a[i]/2;
    a[i]%=2;
  }
  printf("%lld\n",ans);
}

int main(void){
  run();
  return 0;
} 