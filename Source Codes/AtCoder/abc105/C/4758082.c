#include<stdio.h>
#include<math.h>

int main(void){
  int n,i=0,a[32]={};
  scanf("%d",&n);
  if(n==0){
    printf("0\n");
    return 0;
  }
  while(n!=0){
    a[i] =abs(n%2);
    if(n<0 && a[i]==1) n-=1;
    n/=-2;
    i++;
  }
  while(i--) printf("%d",a[i]);
  printf("\n");
  return 0;
} 