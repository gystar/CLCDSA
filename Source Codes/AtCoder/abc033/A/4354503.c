#include <stdio.h>

int main(void){
	
	char n[100];
	int count;
	
	scanf("%s",n);
	
	for(int i=0;n[i]!='\0';i++){
		if(n[i]==n[i+1]){
			count++;
		}
	}
	
	if(count==3){
		printf("SAME\n");
	}else{
		printf("DIFFERENT\n");
	}
	
	return 0;
} 