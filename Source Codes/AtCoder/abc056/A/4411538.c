#include <stdio.h>
int main(void){
	char a[2],b[2];
	scanf("%s %s",a,b);
	if(a[0]=='H'){
		if(b[0]=='H') printf("H\n");
		else printf("D\n");
	}
	else{
		if(b[0]=='H') printf("D\n");
		else printf("H\n");
	}
	return 0;
} 