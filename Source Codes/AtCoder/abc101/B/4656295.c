#include <stdio.h>
#include <stdlib.h>
int main(void){
char s[15];
  int sum;
  int count;
  int a;
  scanf("%s",s);
  for(count=0;s[count]!='\0';count++){
 sum=sum+(s[count]-'0');
  }
  a=atoi(s);
  if(a%sum==0){printf("Yes");}
  else {printf("No");}
return 0;
} 