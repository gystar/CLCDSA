#include<stdio.h>

int main(){
		int i;
		char s[51],t[51];
		scanf("%s%s",s,t);
		for(i=0;s[i]!=0;i++){
				printf("%c",s[i]);
				if(t[i]!=0)printf("%c",t[i]);
		}
		puts("");
		return 0;
} 