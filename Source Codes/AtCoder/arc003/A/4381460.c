#include<stdio.h>

int main(){
	int n,i;
	char s[101];
	double ans=0;
	scanf("%d%s",&n,s);
	for(i=0;i<n;i++)ans+=(double)((4-(s[i]-'A'))>0?(4-(s[i]-'A')):0);
	printf("%.11lf\n",(double)ans/(double)n);
	return 0;
} 