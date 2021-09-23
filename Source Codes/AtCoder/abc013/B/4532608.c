#include <stdio.h>
#include <stdlib.h>

int min(int a,int b){
  if(a < b){
    return a;
  }
  return b;
}

int main(void){
  int a,b;
  scanf("%d%d",&a,&b);

  printf("%d\n",min(abs(a-b),min(9-a,a)+min(9-b,b)+1));

  return 0;
} 