#include <stdio.h>

int main(void)
{
	char s1[100],s2[100],s3[100];
	
	scanf("%s %s %s",s1,s2,s3);
	
	//char ans[]={s1[0],s2[0],s3[0]};
	
	printf("%c%c%c\n",s1[0]-32,s2[0]-32,s3[0]-32);
	
	return 0;
} 