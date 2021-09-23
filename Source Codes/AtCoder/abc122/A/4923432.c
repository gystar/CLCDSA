#include<stdio.h>
int main(void)
{
	char a;
	scanf("%s",&a);

	if (a=='A')	printf("T\n");
	
	else  if(a=='G') printf("C\n");
	
	else  if(a=='T') printf("A\n");
	
	else  if(a=='C') printf("G\n");
	

	return 0;
} 