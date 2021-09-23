#include <stdio.h>

#define MAXSIZE 200

int main(void){
	char s[MAXSIZE]={};
	int a,b,c,d,i;
	scanf("%s %d %d %d %d",s,&a,&b,&c,&d);
	a--;
	b--;
	c--;
	d--;
	if(a==-1){
		printf("%c",'\"');
	}
	for(i=0;i<MAXSIZE;i++){
		if(s[i]!='\0'){
			printf("%c",s[i]);
		}else{
			printf("\n");
			break;
		}
		if(i==a||i==b||i==c||i==d){
			printf("%c",'\"');
		}
	}
	return 0;
} 