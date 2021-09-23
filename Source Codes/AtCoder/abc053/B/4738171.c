#include<stdio.h>
#include<string.h>


int main(void){
	
	char s[200000];
	
	scanf("%s",s);
	int sentou,matubi,len=strlen(s),i;
	
	
	
	for(i=0;i<len;i++){
		if(s[i]=='A'){
		sentou=i+1;
		break;
		}
	}
	
	for(i=len-1;i>=0;i--){
		if(s[i]=='Z'){
		matubi=i+1;
		break;
		}
	}
	
	
	printf("\n%d\n\n",matubi-sentou+1);
	
	
	return 0;
} 