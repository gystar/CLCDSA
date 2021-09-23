#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
  int n,t,ans=0;
  int a[100001] = {};
  scanf("%d%d",&n,&t);
  for(int i=0; i<n; i++) {
    scanf("%d",&a[i]);
  }
  for(int i=0; i<n; i++) {
    if(i!=n-1 && a[i]+t>a[i+1]) {
      ans+=a[i+1]-a[i];
    }else{
      ans+=t;
    }
  }
  printf("%d\n",ans);
  return 0;
} 