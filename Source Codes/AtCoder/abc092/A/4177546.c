#include <stdio.h>

int min(int a,int b){
  if(a < b){
    return a;
  }
  return b;
}

int main(void){
  int A,B,C,D;
  scanf("%d%d%d%d",&A,&B,&C,&D);

  printf("%d\n",min(A,B)+min(C,D)); 

  return 0;
} 