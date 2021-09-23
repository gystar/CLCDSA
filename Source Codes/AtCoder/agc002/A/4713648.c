#include<stdio.h>
int a, b;
int main(){
  scanf("%d%d", &a, &b);
  if(a==0 || b==0){
    puts("Zero");
  }else if(a<0 && b>0){
    puts("Zero");
  }else if(a>0){
    puts("Positive");
  }else if((a&1)^(b&1)){
    puts("Positive");
  }else{
    puts("Negative");
  }
} 