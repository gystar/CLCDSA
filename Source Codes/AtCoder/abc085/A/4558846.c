#include<stdio.h>
int main(void){
  int year,month,day;
  scanf("%d/%d/%d",&year,&month,&day);
  if(year!=2018){
    year=2018;
  }
  printf("%d/",year);
  if(month<10){
    printf("0");
  }
  printf("%d/",month);
  if(day<10){
    printf("0");
  }
  printf("%d",day);
  return 0;
} 