#include<stdio.h>

int main(){
	int a,b,c,d,i;
	char s[105];
	scanf("%s%d%d%d%d",s,&a,&b,&c,&d);
	for(i=0;s[i]!=0;i++){
		if(i==a||i==b||i==c|i==d){
			printf("\"");
		}
		printf("%c",s[i]);
	}
	if(i==d)printf("\"");
	puts("");
	return 0;
} 