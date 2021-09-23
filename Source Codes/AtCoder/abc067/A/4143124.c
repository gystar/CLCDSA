#include<stdio.h>
int main(void){
  int A,B,ok=0;
  scanf("%d %d",&A,&B);

  if(A%3==0){
    ok=1;
  }else if(B%3==0){
    ok=1;
  }else if((A+B)%3==0){
    ok=1;
  }


if(ok==1){
  printf("Possible");
}else{
  printf("Impossible");
}
    return 0;
} 