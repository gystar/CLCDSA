#include<stdio.h>

int main(){
		int i;
		char x,s[51];
		scanf("%c%s",&x,s);
		for(i=0;s[i]!=0;i++)if(s[i]!=x)printf("%c",s[i]);
		puts("");return 0;
} 