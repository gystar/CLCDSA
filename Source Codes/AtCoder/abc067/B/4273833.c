#include <stdio.h>
#include <string.h>

int main(void)
{
	int n,k,i,j,temp,sum=0;
	scanf("%d%d",&n,&k);
	int s[n];
	for(i=0;i<=n-1;i++)
		{scanf("%d",&s[i]);}
					for(i=0;i<=n-1;i++){fprintf(stderr,"%d ",s[i]);}

	for(i=0;i<=n-2;i++)
		{
		for(j=0;j<=n-2-i;j++)
			{
			if(s[j]<s[j+1])
				{
				temp=s[j];
				s[j]=s[j+1];
				s[j+1]=temp;
				}
			}
		}
					fprintf(stderr,"\n");
					for(i=0;i<=n-1;i++){fprintf(stderr,"%d ",s[i]);}

	for(i=0;i<=k-1;i++)
		{sum+=s[i];}
	printf("\n%d\n",sum);
	return 0;
} 