#include<stdio.h>
int main(void){

  char a;
  scanf("%c",&a);

  if(a=='A'){
    printf("T");
  }else if(a=='C'){
    printf("G");
  }else if(a=='T'){
    printf("A");
  }else if(a=='G'){
    printf("C");
  }else{
    printf(":(");
  }

return 0;
} 