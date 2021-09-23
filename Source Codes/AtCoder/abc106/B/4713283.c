#include<stdio.h>
short n;
int main(){
  scanf("%hd", &n);
  if(n<105){
    puts("0");
  }else if(n<135){
    puts("1");
  }else if(n<165){
    puts("2");
  }else if(n<189){
    puts("3");
  }else if(n<195){
    puts("4");
  }else{
    puts("5");
  }
} 