#include<stdio.h>
int main(void){
  int A,B;
  scanf("%d %d",&A,&B);
  if(A*B%2==0){
    printf("No\n");
  }else{
    printf("Yes\n");
  }
  return 0;
} 