#include <stdio.h>
int main()
{
	int N,A,B;
	scanf("%d%d%d",&N,&A,&B);
	if(N==1)
	{
		if(A==B)
			printf("1");
		else
			printf("0");
	}
	else{
		if(A>B)
			printf("0");
		else
			printf("%lld",(long long)(B-A)*(N-2)+1);
	}
		
} 