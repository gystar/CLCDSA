#include <stdio.h>

int main(void)
{
	int n,j,k;
	char s[100];
	
	scanf("%s%d",s,&n);
	
	if(n%5!=0){
		j=n/5;
		k=n%5-1;
	}else{
		j=n/5-1;
		k=4;
	}
	
	
	printf("%c",s[j]);
	printf("%c\n",s[k]);
	
	return 0;
} 