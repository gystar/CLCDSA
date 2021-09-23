#include<stdio.h>

int main(){
  int i,j=0,k=0;
  
  int a,b;
  
  scanf("%d %d",&a,&b);
  
  k = b-a;
  
  for(i=1;i<k;i++)
    j += i;
  
  printf("%d\n",j-a);
  return 0;
} 