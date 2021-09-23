#include <stdio.h>

int main(void)

{
	char name[100];
	
	scanf("%s",name);
	
	int i=0;
	int count=0;
	
	while(name[i]!='\0'){
		i++;
	}
	
	if(name[i-1]=='T'){
		printf("YES\n");
	}else{
		printf("NO\n");
	}
	
	return 0;
} 