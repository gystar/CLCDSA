#include<stdio.h>

int main(void){
  int m,i,n,sum;
  scanf("%d",&n);
  m = n;
  while(n){
    sum += n%10;
    n = n/10;
  } 
  //printf("%d ",sum);
  if(m%sum==0){
    printf("Yes\n");
  }else{
    printf("No\n");
  }
  
  return 0;
} 