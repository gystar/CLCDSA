#include<stdio.h>
int main(void){

  int num, sum;
  sum = 0;
  scanf("%d", &num);

  while(num - 10 >= 0){
    sum += 100;
    num -= 10;
//  printf("%d %d\n",sum,num);
  }
  if(num >= 7){
    sum += 100;

  }else{
    sum += num * 15;
  }
  printf("%d\n",sum);
  return 0;
} 