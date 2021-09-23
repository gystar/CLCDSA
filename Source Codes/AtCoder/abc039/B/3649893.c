#include <stdio.h>

int main(void){
  int x;
  scanf("%d",&x);
  for(int i=1; i*i*i*i<=x; i++) {
    if(i*i*i*i==x) {
      printf("%d\n",i);
      break;
    }
  }
  return 0;  
} 