#include<stdio.h>
#include<string.h>
int main(void){
 char w[30];
 int i;
 scanf("%s",w);
 for(i=0;i<strlen(w);i++){
 	if(w[i] != 'a' && w[i] != 'i' &&
       w[i] != 'u' && w[i] != 'e' && w[i] != 'o')
 	printf("%c",w[i]);
 }
	printf("\n");
     return 0;
 } 