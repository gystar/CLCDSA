#include <stdio.h>
int main(void){
  char s[1];
  scanf("%s",s);
  if(strcmp(s,"A")==0) printf("%d\n",1);
  if(strcmp(s,"B")==0) printf("%d\n",2);
  if(strcmp(s,"C")==0) printf("%d\n",3);
  if(strcmp(s,"D")==0) printf("%d\n",4);
  if(strcmp(s,"E")==0) printf("%d\n",5);
  return 0;
} 