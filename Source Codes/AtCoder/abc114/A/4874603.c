#include <stdio.h>

int main(void){
  int n;
  scanf("%d",&n);
  if(n == 3 || n == 5 || n == 7){
    printf("%s","YES");
  }else{
    printf("%s","NO");
  }
  
  return 0;
} 