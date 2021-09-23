#include<stdio.h>
int main(void){
	char S[4];
	int a;
	int p=0;
	for(a=0;a<4;a++){
		scanf("%c",&S[a]);
		if(S[a]=='+'){
			p++;
		}else{
			p--;
		}
	}
	printf("%d",p);
return 0;
} 