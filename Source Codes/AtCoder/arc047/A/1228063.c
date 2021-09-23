#include <stdio.h>

char str[100001];

int main(void)
{
 	int n,l;
 	int t=1,ans=0;
 	scanf("%d%d",&n,&l);
 	scanf("%s",str);
 	for(int i=0;str[i]!='\0';i++){
 		if(str[i]=='+'){
 			if(t==l) ans++,t=1;
 			else t++;
 		}
 		else t--;
 	}
 	printf("%d\n",ans);
 	return 0;
} 