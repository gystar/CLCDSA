#include <stdio.h>

int main(){
	char str[1005];
	int count = 0;
	char p;
	scanf("%s", str);
	p = str[0];
	for(int i = 0;; i++){
		if(str[i] != p){
			printf("%c%d", p, count);
			count = 1;
			p = str[i];
			if(p == '\0')break;
		}else
			count++;
	}
	printf("\n");
	return 0;
} 