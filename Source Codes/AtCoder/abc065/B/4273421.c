#include <stdio.h>
#include <string.h>

int main(void)
{
	int n,i;
	scanf("%d",&n);
	int s[n];
	for(i=0;i<=n-1;i++)
		{scanf("%d",&s[i]);}
	int next=1,count=0;
	while(next!=2)
		{
		next=s[next-1];
		count++;
		if(count>n){count=-1;break;}
		}
	printf("%d",count);
	


	return 0;
} 