#include <stdio.h>
int main(void){
char s[50];
  int count=0;
  int n;
  scanf("%s",&s);
  for(n=0;n!=4;n++){
  if(s[n]=='+'){count++;}
   if(s[n]=='-'){count--;}
  }
  printf("%d",count);
  
return 0;
} 