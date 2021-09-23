#include <stdio.h>
#include <stdlib.h>

int Findgcd_by_Euclid(int, int);

int main()
{
	int monster;
	int d;
	int i;
	int gcd;
	scanf("%d", &d);

	scanf("%d", &monster);
	gcd = monster;

	for (i = 1; i < d; i++)
	{
		scanf("%d", &monster);
		gcd = Findgcd_by_Euclid(monster, gcd);
	}
	printf("%d", gcd);
	return 0;
}

int Findgcd_by_Euclid(int a, int b)
{
	int c;
	while (b)
	{
		c = a % b;
		a = b;
		b = c;
	}
	return a;
} 