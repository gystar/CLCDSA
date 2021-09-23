#include<stdio.h>

int main(void){
  int a,b,i,k;
  scanf("%d %d %d",&a,&b,&k);
  for(i=a;i<=b;i++){
    if((i<a+k) || (b-k<i)){
      printf("%d\n",i);
    }
  }
  return 0;
} 