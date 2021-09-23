#include <stdio.h>
#include <string.h>

int main(void)
{
	int h,w;
	scanf("%d%d",&h,&w);
	char s[h][w+1],cpy[h][w+1];
	int i;
	for(i=0;i<=h-1;i++)
		{
		fprintf(stderr,"\ni=%d",i);
		scanf("%s",s[i]);
		strcpy(cpy[i],s[i]);
		}
	
	for(i=0;i<=h-1;i++)
		{
		printf("%s\n%s\n",s[i],cpy[i]);
		}
	
	

	return 0;
} 