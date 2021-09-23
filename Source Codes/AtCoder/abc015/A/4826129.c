#include <stdio.h>
#include <string.h>
int main(){
  char a[55],b[55];
  scanf("%s\n%s",a,b);
  
  if( strlen(a) > strlen(b)) printf("%s\n",a);
  else printf("%s\n",b);
  return 0;
} 