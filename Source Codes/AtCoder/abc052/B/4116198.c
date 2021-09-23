#include <stdio.h>

int main(void){
	int n, x = 0, max = 0;
	char c;
	scanf("%d\n", &n);
	for(int i = 0; i < n; i++){
		scanf("%c", &c);
		if(c == 'I')x++;
		else x--;
		if(x > max)max = x;
	}
	printf("%d\n", max);
	return 0;
} 