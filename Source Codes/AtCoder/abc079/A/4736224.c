#include<stdio.h>
#include<string.h>
int main(void)
{
	char n[4];
	
	scanf("%s",n);
	
	if(n[1]==n[2]){
		if(n[0]==n[1] || n[2]==n[3]){
			printf("Yes");
		}else printf("No");
	}else printf("No");
	
	return 0;
} 