#include <stdio.h>
int main(void){
char a[4];
  scanf("%s",&a);
  if((a[0]!=a[1])&&(a[0]!=a[2])&&(a[1]!=a[2])){printf("Yes\n");}
  else{printf("No\n");}
  
return 0;
} 