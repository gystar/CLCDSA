#include <stdio.h>

int main(){
	char a, b;
	
	scanf("%c %c", &a, &b);
	
	if(a==(b-32)) printf("Yes");
	else		  printf("No");
} 