#include <stdio.h>
#include <string.h>
int main(){
char str[50];
  char dic[10] ={'a','i','u','e','o'};
  scanf("%s",str);
  int i,j;
  //printf("%d\n",strlen(str));
  
  for(i=0;i<strlen(str);i++){
  	for(j=0;j<5;j++){
      //printf("%c %c\n",str[i],dic[j]);
    	if(str[i] == dic[j]) str[i] = '0';  
    }
  }
   for(i=0;i<strlen(str);i++){
   		if(str[i] != '0') printf("%c",str[i]);
   }
  
  printf("\n");
  
  //printf("%c",'a'+1);
  return 0;
} 