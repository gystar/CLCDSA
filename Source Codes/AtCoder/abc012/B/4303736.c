#include<stdio.h>
int main(void)
{
	int n,hh,mm,ss;
	scanf("%d",&n);
	hh=n/3600;
	n=n%3600;
	mm=n/60;
	n=n%60;
	ss=n;
	printf("%02d:%02d:%02d\n",hh,mm,ss);
	return 0;
} 