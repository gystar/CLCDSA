#include <stdio.h>

int main(void) {
  char x;
  scanf("%c",&x);
  
  switch (x){
    case 'A': printf("1\n"); break;
    case 'B': printf("2\n");break;
    case 'C': printf("3\n");break;
    case 'D': printf("4\n");break;
    case 'E':printf("5\n");break;
    defalut: return 0;
  }
  return 0;
  
} 