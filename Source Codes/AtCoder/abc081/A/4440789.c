#include<stdio.h>

int main()
{
	char s[100];
	scanf("%s",s);
	int counter = 0;
	if(s[0] == '1') counter++;
	if(s[1] == '1') counter++;
	if(s[2] == '1') counter++;
	printf("%d",counter);
} 