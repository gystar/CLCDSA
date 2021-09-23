#include <stdio.h>

int min(int a,int b){
  if(a < b){
    return a;
  }
  return b;
}

int max(int a,int b){
  if(a > b){
    return a;
  }
  return b;
}

int main(void){
  int A,D;
  scanf("%d%d",&A,&D);

  printf("%d\n",max(A,D)*(min(A,D)+1));

  return 0;
} 