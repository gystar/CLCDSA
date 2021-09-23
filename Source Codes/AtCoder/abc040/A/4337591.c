#include <stdio.h>

int min(int a,int b){
  if(a < b){
    return a;
  }
  return b;
}

int main(void){
  int n,x;
  scanf("%d%d",&n,&x);

  printf("%d\n",min(x-1,n-x));

  return 0;
} 