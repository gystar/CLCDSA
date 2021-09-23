#include <stdio.h>

int main(void)
{
	int a,b,n,i;
	
	scanf("%d\n%d\n%d",&a,&b,&n);
	
	i=n;
	
	while(i%a!=0||i%b!=0){
		i++;
	}
	
	printf("%d\n",i);
	
	return 0;
} 