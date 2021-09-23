#include <stdio.h>

int main(void)
{
	char s1[10],s2[10],s3[10];
	scanf("%s%s%s",s1,s2,s3);
	char c1=s1[0]-32,c2=s2[0]-32,c3=s3[0]-32;
	printf("%c%c%c\n",c1,c2,c3);
	return 0;
} 