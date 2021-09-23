#include<stdio.h>
#include<stdlib.h>
#include<math.h>

typedef long long int int64;

#define MAX(a,b) ((a)>(b)?(a):(b))
#define MIN(a,b) ((a)<(b)?(a):(b))
#define ABS(a) ((a)>(0)?(a):-(a))

void run(void){
  int n,t;
  scanf("%d%d",&n,&t);
  int *a=(int *)malloc(sizeof(int)*n);
  int i;
  for(i=0;i<n;i++) scanf("%d",a+i);
  int ans=0;
  int before=0;
  for(i=1;i<n;i++){
    if(a[i]-t>a[i-1]){
      ans+=a[i-1]+t-a[before];
      before=i;
    }
  }
  ans+=a[n-1]+t-a[before];
  printf("%d\n",ans);
}

int main(void){
  run();
  return 0;
} 