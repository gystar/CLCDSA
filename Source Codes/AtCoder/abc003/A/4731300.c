#include <stdio.h>
int main (void)
{
	int t,i;
	int wage=0;
	int total_wage,expect;
	scanf("%d",&t);

	for(i=1;i<=t;i++){
	wage = i * 10000;
	total_wage = total_wage + wage;
	}
	expect = total_wage / t;
	printf("%d\n",expect);
	return 0;

} 