#include<stdio.h>
int main(void){
	
	char s[100000];
	scanf("%s",s);
	
	int i,len=strlen(s);
	
	
	
	if(len%2==0){
	for(i=0;i<len/2;i++){
		
		printf("%c",s[2*i]);
		
	}
	}else {
	
	for(i=0;i<len/2+1;i++){
		
		printf("%c",s[2*i]);
		
	}
	}	
	
	
	return 0;
} 