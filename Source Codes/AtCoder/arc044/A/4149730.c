#include<stdio.h>
#include<math.h>
int main()
{
	int a;
	scanf("%d",&a);
	if(a==3||a==2||a==5)printf("Prime\n");
	else if(a==1)printf("Not Prime\n");
	else if(a%2==0||a%3==0||a%5==0)printf("Not Prime\n");
	else printf("Prime\n");
	return 0;
} 