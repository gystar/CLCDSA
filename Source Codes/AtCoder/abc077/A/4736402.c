#include<stdio.h>
int main(void)
{
	char c1[3],c2[3],tmp;
	
	scanf("%s",c1);
	scanf("%s",c2);
	
	tmp=c2[0];
	c2[0]=c2[2];
	c2[2]=tmp;
	
	if(strcmp(c1,c2)==0) printf("YES");
	else printf("NO");
	
	return 0;
} 