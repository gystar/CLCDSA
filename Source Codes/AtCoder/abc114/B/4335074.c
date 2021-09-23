#include<stdio.h>
#include<string.h>
int main(void)
{
	int strNum,num,diff,ans=753,a,i;
	char S[10];
	
	scanf("%s",S);
	strNum=strlen(S);

	for(i=0;i<strNum-2;i++){
		num=(S[i]-'0')*100 + (S[i+1]-'0')*10 + (S[i+2]-'0');
		diff=abs(num-753);
		if(diff<ans) ans=diff;
	}

	printf("%d\n",ans);

	return 0;
} 