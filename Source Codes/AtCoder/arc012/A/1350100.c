#include <stdio.h>
#include <string.h>

int main() {
	char a[20];

	scanf("%s",a);

	if(!strcmp(a,"Sunday"))printf("0\n");
	else if(!strcmp(a,"Saturday"))printf("0\n");
	else if(!strcmp(a,"Monday"))printf("5\n");
	else if(!strcmp(a,"Tuesday"))printf("4\n");
	else if(!strcmp(a,"Wednesday"))printf("3\n");
	else if(!strcmp(a,"Thursday"))printf("2\n");
	else if(!strcmp(a,"Friday"))printf("1\n");
	return 0;
} 