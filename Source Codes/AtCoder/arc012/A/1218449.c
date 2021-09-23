#include <stdio.h>

int main(void)
{
	char day[20];
	int ans;
	scanf("%s",day);
	
	if(day[0]=='M'){
		printf("5\n");
	} else if(day[0]=='T' && day[1]=='u'){
		printf("4\n");
	} else if(day[0]=='W'){
		printf("3\n");
	} else if(day[0]=='T' &&day[1]=='h'){
		printf("2\n");
	} else if(day[0]=='F'){
		printf("1\n");
	} else {
		printf("0\n");
	}
		
	return 0;
} 