#include <stdio.h>
int main(void){
	char s[20];
	int i;
	scanf("%s",s);
	for(i=0;i<19;i++){
		if(i==5 || i==13){
			s[i]=' ';
		}
	}
	printf("%s\n",s);
	return 0;
} 