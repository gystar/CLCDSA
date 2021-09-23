#include<stdio.h>
int main(void)
{
	int N,A,i;
	scanf("%d",&N);
	scanf("%d",&A);
	i=N%500;
	
	if(i<=A)
		printf("\nYes\n\n");
	else 
		printf("\nNo\n\n");
	
	
	return 0;
} 