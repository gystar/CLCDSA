#include <stdio.h>
int main(void){
  int n,a[100],i;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d",&a[i]);
  }
  int max=0,min=1000;
  for(i=0;i<n;i++){
    if(a[i]>max) max=a[i];
  }
  for(i=0;i<n;i++){
    if(a[i]<min) min=a[i];
  }
  printf("%d",max-min);
  return 0;
} 