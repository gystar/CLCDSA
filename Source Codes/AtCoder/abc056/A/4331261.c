#include<stdio.h>
#include<string.h>

int main(){
	char a,b;
	scanf("%c %c",&a,&b);
	if(a=='D'){
		if(b=='H'){
			printf("D");
		}
		else{
			printf("H");
		}
	}
	if(a=='H'){
		if(b=='D'){
			printf("D");
		}
		else{
			printf("H");
		}
	}
} 