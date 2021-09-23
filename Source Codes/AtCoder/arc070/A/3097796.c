#include <stdio.h>

int main(void){
  int a,b,x,num=0;
  scanf("%d",&x );
  int i=1;
  while(1){
    num=num+i;
    if(num>=x){
      break;
    }
    i++;
  }
  printf("%d\n",i );

  return 0;
} 