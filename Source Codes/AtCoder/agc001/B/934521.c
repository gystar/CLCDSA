#include<stdio.h>

int main()
{
	long n, x, temp1, temp2;

	scanf("%ld%ld", &n, &x);

	temp1= n;
	while(x)
	{
		temp2= n;
		n= x;
		x= temp2% x;
	}

	printf("%ld\n", (temp1- n)* 3);

	return 0;
} 