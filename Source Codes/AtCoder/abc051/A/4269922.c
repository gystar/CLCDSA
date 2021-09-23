#include<stdio.h>
#include<string.h>
int main()
{
	char a[100];
	gets(a);
	int m = strlen(a);
	int i,j;
	for(i = 0;i<m;i++)
	{
		if(a[i] != ',')
		{
			printf("%c",a[i]);
		}
		else if(a[i] == ',')
		{
			printf(" ");
		}
	}
	return 0;
} 