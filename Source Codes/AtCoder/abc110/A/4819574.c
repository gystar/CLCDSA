#include<stdio.h>
int main(void){
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(a<b){
		if(b<c){
			printf("%d",(10*c)+a+b);
		}else{
			printf("%d",(10*b)+a+c);
		}
	}else{
		if(a<c){
			printf("%d",(10*c)+a+b);
		}else{
			printf("%d",(10*a)+b+c);
		}
	}
return 0;
} 