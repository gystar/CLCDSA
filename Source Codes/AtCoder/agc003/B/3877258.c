#include<stdio.h>
#include<stdlib.h>

typedef long long int int64;

void run(void){
  int n;
  scanf("%d",&n);
  int *a=(int *)calloc(n,sizeof(int));
  int i;
  for(i=0;i<n;i++) scanf("%d",a+i);
  int64 ans=a[0]/2;
  a[0]%=2;
  for(i=1;i<n;i++){
    if(a[i-1]>0 && a[i]>0){
      ans++;
      a[i]--;
    }
    ans+=a[i]/2;
    a[i]%=2;
  }
  printf("%lld\n",ans);
}

int main(void){
  run();
  return 0;
} 