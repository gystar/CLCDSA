#include <stdio.h>
int main(void){
char a[100];
  int count;
  scanf("%s",&a);
  for(count=0;a[count]!='\0';count++){
  if(a[count]==','){a[count]=' ';}
  }
  printf("%s",a);
return 0;
} 