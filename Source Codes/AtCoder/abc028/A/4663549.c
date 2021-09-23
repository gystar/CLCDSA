#include <stdio.h>
int main(void){
	int n;
	scanf("%d",&n);
	if(n<60)printf("Bad\n");
	else if(n<90)printf("Good\n");
	else if(n<100)printf("Great\n");
	else printf("Perfect\n");
	return 0;
} 