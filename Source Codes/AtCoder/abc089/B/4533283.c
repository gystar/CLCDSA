#include <stdio.h>

int main(void)
{
	int n,count;
	char s[110];
	
	count=0;
	
	scanf("%d",&n);
	
	for(int i=0;i<n;i++){
		scanf("%c",&(s[i]));
	}
	
	for(int i=0;i<n;i++){
		if(s[i]=='Y'){
			count++;
			break;
		}
	}
	
	if(count!=0){
		printf("Four\n");
	}else{
		printf("Three\n");
	}
	
	return 0;
} 