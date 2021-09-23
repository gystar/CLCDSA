#include<stdio.h>

int main(){
	long x,y,k;
	scanf("%ld%ld%ld",&x,&y,&k);
	if(y>=k)printf("%ld\n",x+k);
	else printf("%ld\n",y+x-(k-y));
	return 0;
} 