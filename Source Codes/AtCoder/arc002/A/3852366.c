#include<stdio.h>
short Y;
int main(){
  scanf("%hd", &Y);
  if(Y%400==0){
    printf("YES\n");
  }else if(Y%100==0){
    printf("NO\n");
  }else if(Y%4==0){
    printf("YES\n");
  }else{
    printf("NO\n");
  }
} 