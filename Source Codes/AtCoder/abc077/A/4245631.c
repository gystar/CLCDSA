#include <stdio.h>

int main(void)
{
	char s1[3],s2[3];
	scanf("%s%s",s1,s2);
	if(s1[0] == s2[2] && s1[1] == s2[1] && s1[2] == s2[0])
		{printf("YES");}
	else
		{printf("NO");}
	return 0;
} 