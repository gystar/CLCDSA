#include <stdio.h>
int main(void)
{
	int n,i,m=0,p=0,q=0;
	long long a[100000];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%lld",&a[i]);
		if(a[i]%4==0)
		  m++;
		else if(a[i]%2==0)
		  p++;
		else
		  q++;
	}
	if(m-q>=0||(m-q==-1)&&p==0)
	  printf("Yes");
	else
	  printf("No");
	return 0;
} 