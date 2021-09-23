#include <stdio.h>
int main(void){
int R;
  scanf("%d",&R);
  if(R<1200){
    printf("ABC");
  }
  else if(R>=1200&&R<2800){
  printf("ARC");
  }
  else if(R>=2800){
  printf("AGC");}
return 0;
} 