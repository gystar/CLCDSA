#include<stdio.h>
#include<string.h>
int main()
{
	char s[100];
	int m,n,i,j;
	int count = 0;
	int max = 0;
	scanf("%d",&n);
	getchar();
	gets(s);
	for(i = 0;i < n;i++)
	{
		if(s[i] == 'I') 
		{
			count++;
		}
		if(s[i] == 'D')
		{
			count--;
		}
		if(max <= count)
		{
			max = count;
		}
	}
	printf("%d",max);
	return 0;
} 