#include <stdio.h>

int main(void){
	int count[6];
	char in;
	for(int i = 0; i < 6; i++)
		count[i] = 0;
	for(int i = 0; i < 100; i++){
		scanf("%c", &in);
		if('A' <= in && in <= 'F')
			count[in - 'A']++;
		else
			break;
	}
	for(int i = 0; i < 6; i++){
		printf("%d", count[i]);
		if(i != 5)
			printf(" ");
	}
	printf("\n");
	return 0;
} 