#include<stdio.h>
#include<string.h>
int main(void)
{
	char n[2];
	
	scanf("%s",n);
	
	if(strchr(n,'9')!=0) printf("Yes");
	else printf("No");
	
	return 0;
} 