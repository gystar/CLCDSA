#include <stdio.h>
#include <math.h>
int main(void){
  int n,a[1000];
  scanf("%d",&n);
  int i,j,min=1E9;
  for(i=0;i<n;i++){
    scanf("%d",&a[i]);
  }
  for(i=-100;i<=100;i++){
    int cost=0;
    for(j=0;j<n;j++){
      cost+=(a[j]-i)*(a[j]-i);
    }
    if(min>cost) min=cost;
  }
  printf("%d",min);
  return 0;
} 