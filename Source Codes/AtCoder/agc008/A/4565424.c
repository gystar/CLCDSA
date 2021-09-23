#include<stdio.h>

int main(){
	long long x,y,ans=2000000000000;
	scanf("%ld%ld",&x,&y);
	if(y-x>=0&&y-x<ans)ans=y-x;
	if(y+x>=0&&1+y+x<ans)ans=1+y+x;
	if(-y-x>=0&&1-y-x<ans)ans=1-y-x;
	if(-y+x>=0&&2-y+x<ans)ans=2-y+x;
	printf("%lld\n",ans);
	return 0;
} 