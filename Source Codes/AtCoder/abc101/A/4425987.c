#include <stdio.h>
int main(void){
	char s[5];
	int i,a=0;
	scanf("%s",s);
	for(i=0;i<4;i++){
		if(s[i]=='+') a++;
		if(s[i]=='-') a--;
	}
	printf("%d\n",a);
	return 0;
} 