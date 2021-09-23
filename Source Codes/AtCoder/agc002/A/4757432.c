#include <stdio.h>
int main(){
  int a,b;
  scanf("%d%d", &a, &b);
  if(a > 0){
    puts("Positive");
  }else if(b >= 0){
    puts("Zero");
  }else if((b-a)%2==0){
    puts("Negative");
  }else{
    puts("Positive");
  }
  return 0;
} 