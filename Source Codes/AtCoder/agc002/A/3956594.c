#include<stdio.h>

int main(){
	long a,b;
	scanf("%ld%ld",&a,&b);
	if(a>0){
		puts("Positive");
		return 0;
	}else if(a==0||b==0){
		puts("Zero");
		return 0;
	}else {
		if(b>0){
			puts("Zero");
			return 0;
		}else {
			if((b-a)%2==0)puts("Negative");
			else puts("Positive");
			return 0;
		}
	}
	return 0;
} 