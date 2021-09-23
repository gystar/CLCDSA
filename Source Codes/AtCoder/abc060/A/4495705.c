#include <stdio.h>
#include <string.h>

int main(void){
char a[100],b[100],c[100];
  int o,p,q;
 scanf("%s",&a);
   scanf("%s",&b);
   scanf("%s",&c);
  o=strlen(a);
  p=strlen(b);
  q=strlen(c);
  if(a[o-1]==b[0]&&b[p-1]==c[0]){printf("YES");}
  else{printf("NO");}
return 0;
} 