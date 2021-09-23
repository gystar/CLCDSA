#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void){
char a[100];
  int n;
  scanf("%s",&a);
  n=strlen(a);
  if(a[n-1]=='T'){printf("YES");}
  else{printf("NO");}
return 0;
} 