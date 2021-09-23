#include <stdio.h>

int main()
{
	int money, cake, donut;
  	scanf("%d%d%d", &money, &cake, &donut);
  	money -= cake;
  	printf("%d", money % donut);
} 