#include <stdio.h>
#include <string.h>

int main(void)
{
	char s1[10],s2[10],s3[10];
	scanf("%s%s%s",s1,s2,s3);
	int a,b;
	a=strlen(s1);
	b=strlen(s2);
	if(s1[a-1] == s2[0] && s2[b-1] == s3[0])
		{printf("YES");}
	else
		{printf("NO");}
	return 0;
} 