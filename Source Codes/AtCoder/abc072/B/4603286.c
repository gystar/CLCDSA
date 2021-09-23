#include <stdio.h>

int main(void)
{
	char s[100001],ans[60000];
	
	scanf("%s",s);
	
	for(int i=0;s[i]!='\0';i++){
		if(i%2==0){
			ans[i/2]=s[i];
		}
	}
	
	printf("%s\n",ans);
} 