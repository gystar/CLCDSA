#include<stdio.h>
#include<math.h>
int main(void){
  int n,*a,i,j,tmp,min=2147483647;
  scanf("%d",&n);
  a=(int)malloc(sizeof(int)*n);
  for(i=0;i<n;i++)scanf("%d",&a[i]);
  for(i=0;i<n;i++)a[i]-=100;
  for(i=-100;i<=100;i++){
    for(j=0,tmp=0;j<n;j++)tmp+=pow(a[j],2);
    if(tmp<min)min=tmp;
    for(j=0;j<n;j++)a[j]++;
  }
  printf("%d",min);
  return 0;
} 