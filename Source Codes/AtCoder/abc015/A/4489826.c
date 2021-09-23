#include <stdio.h>
#include <string.h>

int main(void){
  char a[50],b[50];
  scanf("%s%s",a,b);

  if(strlen(a) > strlen(b)) printf("%s\n",a);
  else printf("%s\n",b);

  return 0;
} 