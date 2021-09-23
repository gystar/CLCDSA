#include <stdio.h>
int main(void){
int a=0,b=0,c=0,d=0,e=0,f=0;
  int count;
  char s[109];
  scanf("%s",&s);
  
  for(count=0;s[count]!='\0';count++){
  if(s[count]=='A'){a++;}
    if(s[count]=='B'){b++;}
    if(s[count]=='C'){c++;}
    if(s[count]=='D'){d++;}
    if(s[count]=='E'){e++;}
    if(s[count]=='F'){f++;}
    
  }
  printf("%d %d %d %d %d %d\n",a,b,c,d,e,f);
return 0;
} 