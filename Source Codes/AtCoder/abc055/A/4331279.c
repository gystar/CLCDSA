#include<stdio.h>
int main()
{
	int pay,back,N;
	scanf("%d",&N);
	pay=N*800;
	back=(N/15)*200;
	//printf("%d %d",pay,back);
	printf("%d",pay-back);
	return 0;
} 