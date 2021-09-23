#include<stdio.h>
int main(){
  int a;
  scanf("%d",&a);
  if(a < 60){
    printf("Bad\n");
  }else if(a < 90){
    printf("Good\n");
  }else if(a < 100){
    printf("Great\n");
  }else{
    printf("Perfect\n");
  }
  return 0;
} 