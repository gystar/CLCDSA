#include<stdio.h>
int a, b, c, d;
int main(){
	scanf("%d%d%d", &a, &b, &c);
	if(a==b){
		d=c;
	}else{
		if(a==c){
			d=b;
		}else{
			d=a;
		}
	}
	printf("%d\n", d);
} 