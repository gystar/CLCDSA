#include<stdio.h>
int main()
{
	int i;
	char x,s[55];
	scanf("%c",&x);
	scanf("%s",s);
	i=0;
	while(s[i]!='\0')
	{
		if(s[i]!=x)
			printf("%c",s[i]);
		i++;
	}
	printf("\n");
	return 0;
} 