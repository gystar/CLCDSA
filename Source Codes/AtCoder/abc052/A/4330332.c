#include<stdio.h>
int main()
{
	int a,b,c,d;
	scanf("%d%d%d%d",&a,&b,&c,&d);
	int number1,number2;
	number1 = a*b;
	number2 = c*d;
	if(number1 >= number2) printf("%d",number1);
	else printf("%d",number2);
	return 0;
 } 