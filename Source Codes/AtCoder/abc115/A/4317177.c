#include <stdio.h>

int main(){
 int D;
  scanf("%d", &D);
  if(D==25){
    printf("Christmas");
  }else if(D==24){
    printf("Christmas Eve");
    
  }else if(D==23){
    printf("Christmas Eve Eve");
  }else{
    printf("Christmas Eve Eve Eve");
  }
  return 0;
} 