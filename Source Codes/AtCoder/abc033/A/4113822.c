#include <stdio.h>

int main(void){
	char c, in;
	scanf("%c", &c);
	for(int i = 0; i < 3; i++){
		scanf("%c", &in);
		if(c != in){
			printf("DIFFERENT\n");
			return 0;
		}
	}
	printf("SAME\n");
	return 0;
} 