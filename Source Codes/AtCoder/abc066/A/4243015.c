#include <stdio.h>

int max(int a,int b){
  if(a > b){
    return a;
  }
  return b;
}

int main(void){
  int a;
  int sum = 0,maximum = 0;

  for(int i = 0;i < 3;i++){
    scanf("%d",&a);
    maximum = max(a,maximum);
    sum += a;
  }  

  printf("%d\n",sum-maximum);

  return 0;
} 