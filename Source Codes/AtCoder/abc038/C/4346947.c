#include <stdio.h>

int main(void){
  int N;
  scanf("%d",&N);

  int a[N];
  for(int i = 0;i < N;i++) scanf("%d",&a[i]);

  long length = 0;
  long long ans = N;
  for(int i = 1;i < N;i++){
    if(a[i] > a[i-1]){
      length++;
    }else{
      ans += (length+1)*length/2;
      length = 0;
    }
  }
  ans += (length+1)*length/2;

  printf("%lld\n",ans);

  return 0;
} 