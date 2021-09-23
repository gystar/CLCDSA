#include <stdio.h>

int main(){
  int N;scanf("%d",&N);
  int a[N];
  int max=0,min=1e10;
  for(int i=0;i<N;i++){
    scanf("%d",&a[i]);
    if(max<a[i]) max=a[i];
    if(min>a[i]) min=a[i];
  }
  printf("%d",max-min);
  return 0;
} 