#include <stdio.h>
#include <stdlib.h>
 
int Findgcd_by_Euclid(int, int);
 
#define MAX_KIND 100002
 
int main()
{
	int monster[MAX_KIND] = { 0 };
	int d;
	int i;
	int gcd;
	scanf("%d", &d);
 
	scanf("%d", &monster[0]);
	gcd = monster[0];
 
	for (i = 1; i < d; i++)
	{
		scanf("%d", &monster[i]);
		gcd = Findgcd_by_Euclid(monster[i], gcd);
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