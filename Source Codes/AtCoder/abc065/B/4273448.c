#include <stdio.h>
#include <string.h>

int main(void)
{
	int n,i;
	scanf("%d",&n);
	int s[n],c[n];
	for(i=0;i<=n-1;i++)
		{
		scanf("%d",&s[i]);
		c[i]=0;
		}
			
	int btn=1,count=0;
	while(btn!=2)
		{
		if(c[btn-1]==1){count=-1;break;}
		c[btn-1]++;
		btn=s[btn-1];
		count++;
		}
	printf("%d",count);
	


	return 0;
} 