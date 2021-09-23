#include<stdio.h>
int main(){
int num,sum=0;
  scanf("%d",&num);
  while(1){
    if(num==0) break;
  sum+=num%10;
    num/=10;
  }
  printf("%d\n",sum);
} 