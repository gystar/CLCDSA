#include <stdio.h>

int main(void)
{
	char a[100],b[100];
	
	scanf("%s%s",a,b);
	
	int i=0;
	
	while(a[i]!='\0'){
		i++;
	}
	
	int j=0;
	
	while(b[j]!='\0'){
		j++;
	}
	
	if(i<j){
		
		printf("%s\n",b);
		
	}else{
		
		printf("%s\n",a);
	}
	
	return 0;
} 