#include<stdio.h>
#include<string.h>

int main(){
  
  int i,j,k;
  char a;
  scanf("%d",&j);
  
  for(i=0;i<j;i++){
    scanf("%c ",&a);
    if((int)a == 89){
      puts("Four");
      return 0;
    }
  }
  
  puts("Three");
  return 0;
} 