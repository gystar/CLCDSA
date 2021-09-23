#include<stdio.h>
int N;
int main(){
	scanf("%d", &N);
	if(N < 60){
		printf("Bad\n");
	}else if(N < 90){
		printf("Good\n");
	}else if(N < 100){
		printf("Great\n");
	}else{
		printf("Perfect\n");
	}
} 