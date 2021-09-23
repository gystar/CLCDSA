#include <stdio.h>

int main(){
	char day[10];
	scanf("%s", day);
	if(day[0] == 'S'){
		printf("0\n");
	}
	else if(day[0] == 'M'){
		printf("5\n");
	}
	else if(day[0] == 'T' && day[1] == 'u'){
		printf("4\n");
	}
	else if(day[0] == 'W'){
		printf("3\n");
	}
	else if(day[0] == 'T'){
		printf("2\n");
	}
	else{
		printf("1\n");
	}
	return 0;
} 