#include <stdio.h>

int gcd(int a, int b){
	int c;
	while(a != 0){
		c = a;
		a = b % a;
		b = c;
	}
	return c;
}

int main(void){
	int w, h;
	scanf("%d %d", &w, &h);
	if(w / gcd(w, h) == 4)
		printf("4:3\n");
	else
		printf("16:9\n");
	return 0;
} 