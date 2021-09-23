#include <stdio.h>
#include <string.h>
void q1()
{
	char t[200];
	char s[200];
	int i,j,k;
	int ssize;
	int tsize;
	scanf("%s%s",s,t);
	ssize=strlen(s);
	tsize=ssize;
	for(i=0;i<tsize;i++)
	{
		j=i;k=0;
		while(k!=ssize)
		{
			if(s[j]!=t[k])
			{
				break;
			}
			k++;
			j++;
			if(j==tsize)
			{
				j=0;
			}
		}
		if(k==ssize)
		{
			printf("Yes");
			return;
		}
	}
	printf("No");
}
int main()
{
	q1();
	return 0;
} 