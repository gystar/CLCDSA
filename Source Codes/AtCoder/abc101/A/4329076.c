#include <stdio.h>

int main(void)
{
	int i,sum;
	char S[100],num[100];
	
	scanf("%s",S);
	
	i=0;
	sum=0;
	
	while(S[i]!=0){
		if(S[i]=='+'){
			sum=sum+1;
		}else{
			sum=sum-1;
		}
		
		i++;
	}
	printf("%d\n",sum);
	
	return 0;
} 