#include<stdio.h>

int main(void){
  int a,b,c,k,s,t;
  int bill;
  
  scanf("%d %d %d %d",&a,&b,&c,&k);
  scanf("%d %d",&s,&t);
  
  bill = (a*s) + (b*t);
  
  if((s+t)>=k){
    bill = bill - (s+t)*c;
  }
  
  printf("%d\n",bill);
  
  return 0;
} 