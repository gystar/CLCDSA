#include <stdio.h>

int main(void)
{
	int n,l,i,count=0,tab=1;
	char s[110000];
	scanf("%d %d %s",&n,&l,s);
		
	for(i=0;i<=n-1;i++){
		if(s[i]=='+'){
			tab++;
		} else{
			tab--;
		}
		if(tab>l){
			count++;
			tab=1;
		}
	}
	printf("%d\n",count);
	return 0;
} 