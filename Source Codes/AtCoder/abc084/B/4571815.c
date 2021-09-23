#include <stdio.h>
#include <ctype.h>

int main(void)
{
	int a,b;
	char s[100];
	
	scanf("%d%d%s",&a,&b,s);
	
	int count=0;
	
	for(int i=0;i<a+b+1;i++){
		if(isdigit(s[i])==0){
			count++;
		}
	}
	
	if(count!=1){
		printf("No\n");
	}else if(s[a]!='-'){
		printf("No\n");
	}else{
		printf("Yes\n");
	}
	
	return 0;
} 