#include <stdio.h>
#include <string.h>
char aa[100],bb[100];
int a,b;
int main(void){
  scanf("%s",&aa);
scanf("%s",&bb);
  a=strlen(aa);
  b=strlen(bb);
  if(a>b){printf("%s",aa);}
  else{printf("%s",bb);}
return 0;
} 