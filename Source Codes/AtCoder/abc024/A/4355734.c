#include <stdio.h>

int main(void)
{
	int a,b,c,k,s,t;
	scanf("%d %d %d %d\n%d %d",&a,&b,&c,&k,&s,&t);
	
	if(s+t<k){
		printf("%d\n",a*s+b*t);
	}else{
		printf("%d\n",a*s+b*t-c*(s+t));
	}
	
	return 0;
} 