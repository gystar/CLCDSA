#include<stdio.h>

int main(){
  int n,i,j;
  long a[100],min=4000000,cnt=0;
  scanf("%d",&n);
  for(i=0;i<n;i++)
    scanf("%ld",&a[i]);
  for(i=-100;i<=100;i++){
    cnt=0;
    for(j=0;j<n;j++){
      cnt+=(a[j]-i)*(a[j]-i);
    }
    if(min>cnt)
      min=cnt;
  }
  printf("%ld\n",min);
} 