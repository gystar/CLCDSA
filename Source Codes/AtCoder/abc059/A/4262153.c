#include <stdio.h>

int main(void){
  char a[10],b[10],c[10];

  scanf("%s",a);
  scanf("%s",b);
  scanf("%s",c);

  printf("%c%c%c\n",a[0]-32,b[0]-32,c[0]-32);

  return 0;
} 