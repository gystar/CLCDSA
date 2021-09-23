#include <stdio.h>
#include <string.h>
int main(void){
char a[10],b[10];
  scanf("%s %s",&a,&b);
  if((strcmp(a,"H")==0)&&(strcmp(b,"H")==0)){printf("H");}
  if((strcmp(a,"H")==0)&&(strcmp(b,"D")==0)){printf("D");}
  if((strcmp(a,"D")==0)&&(strcmp(b,"H")==0)){printf("D");}
  if((strcmp(a,"D")==0)&&(strcmp(b,"D")==0)){printf("H");}
return 0;
} 