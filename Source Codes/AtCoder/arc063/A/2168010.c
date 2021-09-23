#include <stdio.h>
#include <string.h>

int main(void)
{int i,j,k,sum,tmp;
	j=0;
	char S[100001];
	scanf("%s",S);
	k=strlen(S);
	
	for(i=1;i<=k-1;i++){
		if(S[i]!=S[i-1]){
			j++;}}
			printf("%d",j);
			
			
} 