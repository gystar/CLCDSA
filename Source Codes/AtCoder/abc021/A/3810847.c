#include<stdio.h>
int main(void){
  int n;
  int i;
  int j=0;
  int k=0;
  
  scanf("%d",&n);
  
  
  if((n%2)==1){
    
    n=n-1;
    j=1;
    k=1;
    
  }
  n=n/2;
  printf("%d\n",n+j);
  if(k==1){
    printf("1\n");
  }
  
  
  for(i=0;i<n;i++){
  
    printf("2\n");
 
  }
  
    
  
  
  return 0;
} 