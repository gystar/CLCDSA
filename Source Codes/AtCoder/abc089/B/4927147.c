#include <stdio.h>
#include <string.h>

int main(){
	char s[202];
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n*2;i++){
		scanf("%c",&s[i]);
	}
	int a=0,b=0,c=0,d=0;
	for(i=0;i<n*2;i++){
		if(s[i]=='P'){
			a = 1;
		}else if(s[i]=='W'){
			b = 1;
		}else if(s[i]=='G'){
			c = 1;
		}else if(s[i]=='Y'){
			d = 1;
		}
	}
	int temp = a+b+c+d;
	if(temp ==3){
		printf("Three");
	}else{
		printf("Four");
	}
	return 0;
} 